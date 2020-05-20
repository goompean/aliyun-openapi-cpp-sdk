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

#include <alibabacloud/waf-openapi/model/DescribeDomainAdvanceConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeDomainAdvanceConfigsResult::DescribeDomainAdvanceConfigsResult() :
	ServiceResult()
{}

DescribeDomainAdvanceConfigsResult::DescribeDomainAdvanceConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainAdvanceConfigsResult::~DescribeDomainAdvanceConfigsResult()
{}

void DescribeDomainAdvanceConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainConfigsNode = value["DomainConfigs"]["DomainConfig"];
	for (auto valueDomainConfigsDomainConfig : allDomainConfigsNode)
	{
		DomainConfig domainConfigsObject;
		if(!valueDomainConfigsDomainConfig["Domain"].isNull())
			domainConfigsObject.domain = valueDomainConfigsDomainConfig["Domain"].asString();
		auto profileNode = value["Profile"];
		if(!profileNode["Cname"].isNull())
			domainConfigsObject.profile.cname = profileNode["Cname"].asString();
		if(!profileNode["ResolvedType"].isNull())
			domainConfigsObject.profile.resolvedType = std::stoi(profileNode["ResolvedType"].asString());
		if(!profileNode["VipServiceStatus"].isNull())
			domainConfigsObject.profile.vipServiceStatus = std::stoi(profileNode["VipServiceStatus"].asString());
		if(!profileNode["CertStatus"].isNull())
			domainConfigsObject.profile.certStatus = std::stoi(profileNode["CertStatus"].asString());
		if(!profileNode["ExclusiveVipStatus"].isNull())
			domainConfigsObject.profile.exclusiveVipStatus = std::stoi(profileNode["ExclusiveVipStatus"].asString());
		if(!profileNode["Ipv6Status"].isNull())
			domainConfigsObject.profile.ipv6Status = std::stoi(profileNode["Ipv6Status"].asString());
		if(!profileNode["HttpPort"].isNull())
			domainConfigsObject.profile.httpPort = profileNode["HttpPort"].asString();
		if(!profileNode["HttpsPort"].isNull())
			domainConfigsObject.profile.httpsPort = profileNode["HttpsPort"].asString();
		if(!profileNode["Http2Port"].isNull())
			domainConfigsObject.profile.http2Port = profileNode["Http2Port"].asString();
		if(!profileNode["Rs"].isNull())
			domainConfigsObject.profile.rs = profileNode["Rs"].asString();
		if(!profileNode["ClusterType"].isNull())
			domainConfigsObject.profile.clusterType = std::stoi(profileNode["ClusterType"].asString());
		if(!profileNode["GSLBStatus"].isNull())
			domainConfigsObject.profile.gSLBStatus = profileNode["GSLBStatus"].asString();
		domainConfigs_.push_back(domainConfigsObject);
	}

}

std::vector<DescribeDomainAdvanceConfigsResult::DomainConfig> DescribeDomainAdvanceConfigsResult::getDomainConfigs()const
{
	return domainConfigs_;
}

