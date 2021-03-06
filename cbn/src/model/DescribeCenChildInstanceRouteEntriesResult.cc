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

#include <alibabacloud/cbn/model/DescribeCenChildInstanceRouteEntriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenChildInstanceRouteEntriesResult::DescribeCenChildInstanceRouteEntriesResult() :
	ServiceResult()
{}

DescribeCenChildInstanceRouteEntriesResult::DescribeCenChildInstanceRouteEntriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenChildInstanceRouteEntriesResult::~DescribeCenChildInstanceRouteEntriesResult()
{}

void DescribeCenChildInstanceRouteEntriesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCenRouteEntriesNode = value["CenRouteEntries"]["CenRouteEntry"];
	for (auto valueCenRouteEntriesCenRouteEntry : allCenRouteEntriesNode)
	{
		CenRouteEntry cenRouteEntriesObject;
		if(!valueCenRouteEntriesCenRouteEntry["DestinationCidrBlock"].isNull())
			cenRouteEntriesObject.destinationCidrBlock = valueCenRouteEntriesCenRouteEntry["DestinationCidrBlock"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["Type"].isNull())
			cenRouteEntriesObject.type = valueCenRouteEntriesCenRouteEntry["Type"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["NextHopInstanceId"].isNull())
			cenRouteEntriesObject.nextHopInstanceId = valueCenRouteEntriesCenRouteEntry["NextHopInstanceId"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["NextHopType"].isNull())
			cenRouteEntriesObject.nextHopType = valueCenRouteEntriesCenRouteEntry["NextHopType"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["NextHopRegionId"].isNull())
			cenRouteEntriesObject.nextHopRegionId = valueCenRouteEntriesCenRouteEntry["NextHopRegionId"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["Status"].isNull())
			cenRouteEntriesObject.status = valueCenRouteEntriesCenRouteEntry["Status"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["OperationalMode"].isNull())
			cenRouteEntriesObject.operationalMode = valueCenRouteEntriesCenRouteEntry["OperationalMode"].asString() == "true";
		if(!valueCenRouteEntriesCenRouteEntry["PublishStatus"].isNull())
			cenRouteEntriesObject.publishStatus = valueCenRouteEntriesCenRouteEntry["PublishStatus"].asString();
		if(!valueCenRouteEntriesCenRouteEntry["RouteTableId"].isNull())
			cenRouteEntriesObject.routeTableId = valueCenRouteEntriesCenRouteEntry["RouteTableId"].asString();
		auto allCenRouteMapRecordsNode = allCenRouteEntriesNode["CenRouteMapRecords"]["CenRouteMapRecord"];
		for (auto allCenRouteEntriesNodeCenRouteMapRecordsCenRouteMapRecord : allCenRouteMapRecordsNode)
		{
			CenRouteEntry::CenRouteMapRecord cenRouteMapRecordsObject;
			if(!allCenRouteEntriesNodeCenRouteMapRecordsCenRouteMapRecord["RegionId"].isNull())
				cenRouteMapRecordsObject.regionId = allCenRouteEntriesNodeCenRouteMapRecordsCenRouteMapRecord["RegionId"].asString();
			if(!allCenRouteEntriesNodeCenRouteMapRecordsCenRouteMapRecord["RouteMapId"].isNull())
				cenRouteMapRecordsObject.routeMapId = allCenRouteEntriesNodeCenRouteMapRecordsCenRouteMapRecord["RouteMapId"].asString();
			cenRouteEntriesObject.cenRouteMapRecords.push_back(cenRouteMapRecordsObject);
		}
		auto allConflictsNode = allCenRouteEntriesNode["Conflicts"]["Conflict"];
		for (auto allCenRouteEntriesNodeConflictsConflict : allConflictsNode)
		{
			CenRouteEntry::Conflict conflictsObject;
			if(!allCenRouteEntriesNodeConflictsConflict["DestinationCidrBlock"].isNull())
				conflictsObject.destinationCidrBlock = allCenRouteEntriesNodeConflictsConflict["DestinationCidrBlock"].asString();
			if(!allCenRouteEntriesNodeConflictsConflict["RegionId"].isNull())
				conflictsObject.regionId = allCenRouteEntriesNodeConflictsConflict["RegionId"].asString();
			if(!allCenRouteEntriesNodeConflictsConflict["InstanceId"].isNull())
				conflictsObject.instanceId = allCenRouteEntriesNodeConflictsConflict["InstanceId"].asString();
			if(!allCenRouteEntriesNodeConflictsConflict["InstanceType"].isNull())
				conflictsObject.instanceType = allCenRouteEntriesNodeConflictsConflict["InstanceType"].asString();
			if(!allCenRouteEntriesNodeConflictsConflict["Status"].isNull())
				conflictsObject.status = allCenRouteEntriesNodeConflictsConflict["Status"].asString();
			cenRouteEntriesObject.conflicts.push_back(conflictsObject);
		}
		auto allAsPaths = value["AsPaths"]["AsPath"];
		for (auto value : allAsPaths)
			cenRouteEntriesObject.asPaths.push_back(value.asString());
		auto allCommunities = value["Communities"]["Community"];
		for (auto value : allCommunities)
			cenRouteEntriesObject.communities.push_back(value.asString());
		cenRouteEntries_.push_back(cenRouteEntriesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeCenChildInstanceRouteEntriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenChildInstanceRouteEntriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenChildInstanceRouteEntriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenChildInstanceRouteEntriesResult::CenRouteEntry> DescribeCenChildInstanceRouteEntriesResult::getCenRouteEntries()const
{
	return cenRouteEntries_;
}

