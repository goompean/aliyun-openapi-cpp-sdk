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

#include <alibabacloud/alidns/model/DescribeDohSubDomainStatisticsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDohSubDomainStatisticsRequest;

DescribeDohSubDomainStatisticsRequest::DescribeDohSubDomainStatisticsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDohSubDomainStatistics")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDohSubDomainStatisticsRequest::~DescribeDohSubDomainStatisticsRequest()
{}

std::string DescribeDohSubDomainStatisticsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeDohSubDomainStatisticsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string DescribeDohSubDomainStatisticsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeDohSubDomainStatisticsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeDohSubDomainStatisticsRequest::getSubDomain()const
{
	return subDomain_;
}

void DescribeDohSubDomainStatisticsRequest::setSubDomain(const std::string& subDomain)
{
	subDomain_ = subDomain;
	setParameter("SubDomain", subDomain);
}

std::string DescribeDohSubDomainStatisticsRequest::getLang()const
{
	return lang_;
}

void DescribeDohSubDomainStatisticsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

