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

#include <alibabacloud/vod/model/ListMediaDNALibsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListMediaDNALibsResult::ListMediaDNALibsResult() :
	ServiceResult()
{}

ListMediaDNALibsResult::ListMediaDNALibsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediaDNALibsResult::~ListMediaDNALibsResult()
{}

void ListMediaDNALibsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAIDNALibInfoListNode = value["AIDNALibInfoList"]["AIDNALibInfo"];
	for (auto valueAIDNALibInfoListAIDNALibInfo : allAIDNALibInfoListNode)
	{
		AIDNALibInfo aIDNALibInfoListObject;
		if(!valueAIDNALibInfoListAIDNALibInfo["FpDBId"].isNull())
			aIDNALibInfoListObject.fpDBId = valueAIDNALibInfoListAIDNALibInfo["FpDBId"].asString();
		if(!valueAIDNALibInfoListAIDNALibInfo["ModelType"].isNull())
			aIDNALibInfoListObject.modelType = valueAIDNALibInfoListAIDNALibInfo["ModelType"].asString();
		if(!valueAIDNALibInfoListAIDNALibInfo["State"].isNull())
			aIDNALibInfoListObject.state = valueAIDNALibInfoListAIDNALibInfo["State"].asString();
		aIDNALibInfoList_.push_back(aIDNALibInfoListObject);
	}

}

std::vector<ListMediaDNALibsResult::AIDNALibInfo> ListMediaDNALibsResult::getAIDNALibInfoList()const
{
	return aIDNALibInfoList_;
}

