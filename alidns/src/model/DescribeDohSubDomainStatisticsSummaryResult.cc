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

#include <alibabacloud/alidns/model/DescribeDohSubDomainStatisticsSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDohSubDomainStatisticsSummaryResult::DescribeDohSubDomainStatisticsSummaryResult() :
	ServiceResult()
{}

DescribeDohSubDomainStatisticsSummaryResult::DescribeDohSubDomainStatisticsSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDohSubDomainStatisticsSummaryResult::~DescribeDohSubDomainStatisticsSummaryResult()
{}

void DescribeDohSubDomainStatisticsSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatisticsNode = value["Statistics"]["Statistic"];
	for (auto valueStatisticsStatistic : allStatisticsNode)
	{
		Statistic statisticsObject;
		if(!valueStatisticsStatistic["SubDomain"].isNull())
			statisticsObject.subDomain = valueStatisticsStatistic["SubDomain"].asString();
		if(!valueStatisticsStatistic["V4HttpCount"].isNull())
			statisticsObject.v4HttpCount = std::stol(valueStatisticsStatistic["V4HttpCount"].asString());
		if(!valueStatisticsStatistic["V6HttpCount"].isNull())
			statisticsObject.v6HttpCount = std::stol(valueStatisticsStatistic["V6HttpCount"].asString());
		if(!valueStatisticsStatistic["V4HttpsCount"].isNull())
			statisticsObject.v4HttpsCount = std::stol(valueStatisticsStatistic["V4HttpsCount"].asString());
		if(!valueStatisticsStatistic["V6HttpsCount"].isNull())
			statisticsObject.v6HttpsCount = std::stol(valueStatisticsStatistic["V6HttpsCount"].asString());
		if(!valueStatisticsStatistic["TotalCount"].isNull())
			statisticsObject.totalCount = std::stol(valueStatisticsStatistic["TotalCount"].asString());
		if(!valueStatisticsStatistic["IpCount"].isNull())
			statisticsObject.ipCount = std::stol(valueStatisticsStatistic["IpCount"].asString());
		if(!valueStatisticsStatistic["HttpCount"].isNull())
			statisticsObject.httpCount = std::stol(valueStatisticsStatistic["HttpCount"].asString());
		if(!valueStatisticsStatistic["HttpsCount"].isNull())
			statisticsObject.httpsCount = std::stol(valueStatisticsStatistic["HttpsCount"].asString());
		statistics_.push_back(statisticsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDohSubDomainStatisticsSummaryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDohSubDomainStatisticsSummaryResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDohSubDomainStatisticsSummaryResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeDohSubDomainStatisticsSummaryResult::getTotalItems()const
{
	return totalItems_;
}

std::vector<DescribeDohSubDomainStatisticsSummaryResult::Statistic> DescribeDohSubDomainStatisticsSummaryResult::getStatistics()const
{
	return statistics_;
}

