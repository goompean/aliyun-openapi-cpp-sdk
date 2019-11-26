/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/alidns/model/DescribeTransferDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeTransferDomainsResult::DescribeTransferDomainsResult() :
	ServiceResult()
{}

DescribeTransferDomainsResult::DescribeTransferDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTransferDomainsResult::~DescribeTransferDomainsResult()
{}

void DescribeTransferDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainTransfersNode = value["DomainTransfers"]["DomainTransfer"];
	for (auto valueDomainTransfersDomainTransfer : allDomainTransfersNode)
	{
		DomainTransfer domainTransfersObject;
		if(!valueDomainTransfersDomainTransfer["DomainName"].isNull())
			domainTransfersObject.domainName = valueDomainTransfersDomainTransfer["DomainName"].asString();
		if(!valueDomainTransfersDomainTransfer["CreateTime"].isNull())
			domainTransfersObject.createTime = valueDomainTransfersDomainTransfer["CreateTime"].asString();
		if(!valueDomainTransfersDomainTransfer["CreateTimestamp"].isNull())
			domainTransfersObject.createTimestamp = std::stol(valueDomainTransfersDomainTransfer["CreateTimestamp"].asString());
		if(!valueDomainTransfersDomainTransfer["FromUserId"].isNull())
			domainTransfersObject.fromUserId = std::stol(valueDomainTransfersDomainTransfer["FromUserId"].asString());
		if(!valueDomainTransfersDomainTransfer["TargetUserId"].isNull())
			domainTransfersObject.targetUserId = std::stol(valueDomainTransfersDomainTransfer["TargetUserId"].asString());
		if(!valueDomainTransfersDomainTransfer["Id"].isNull())
			domainTransfersObject.id = std::stol(valueDomainTransfersDomainTransfer["Id"].asString());
		domainTransfers_.push_back(domainTransfersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeTransferDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeTransferDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeTransferDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTransferDomainsResult::DomainTransfer> DescribeTransferDomainsResult::getDomainTransfers()const
{
	return domainTransfers_;
}

