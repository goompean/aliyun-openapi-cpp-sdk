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

#include <alibabacloud/alidns/model/DescribeCustomLineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeCustomLineResult::DescribeCustomLineResult() :
	ServiceResult()
{}

DescribeCustomLineResult::DescribeCustomLineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomLineResult::~DescribeCustomLineResult()
{}

void DescribeCustomLineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpSegmentListNode = value["IpSegmentList"]["IpSegment"];
	for (auto valueIpSegmentListIpSegment : allIpSegmentListNode)
	{
		IpSegment ipSegmentListObject;
		if(!valueIpSegmentListIpSegment["Name"].isNull())
			ipSegmentListObject.name = valueIpSegmentListIpSegment["Name"].asString();
		if(!valueIpSegmentListIpSegment["StartIp"].isNull())
			ipSegmentListObject.startIp = valueIpSegmentListIpSegment["StartIp"].asString();
		if(!valueIpSegmentListIpSegment["EndIp"].isNull())
			ipSegmentListObject.endIp = valueIpSegmentListIpSegment["EndIp"].asString();
		ipSegmentList_.push_back(ipSegmentListObject);
	}
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["IpSegments"].isNull())
		ipSegments_ = value["IpSegments"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::vector<DescribeCustomLineResult::IpSegment> DescribeCustomLineResult::getIpSegmentList()const
{
	return ipSegmentList_;
}

std::string DescribeCustomLineResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeCustomLineResult::getCreateTime()const
{
	return createTime_;
}

long DescribeCustomLineResult::getId()const
{
	return id_;
}

std::string DescribeCustomLineResult::getIpSegments()const
{
	return ipSegments_;
}

long DescribeCustomLineResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

std::string DescribeCustomLineResult::getCode()const
{
	return code_;
}

std::string DescribeCustomLineResult::getName()const
{
	return name_;
}

