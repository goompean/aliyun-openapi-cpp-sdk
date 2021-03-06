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

#include <alibabacloud/devops-rdc/model/ListSmartGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListSmartGroupResult::ListSmartGroupResult() :
	ServiceResult()
{}

ListSmartGroupResult::ListSmartGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSmartGroupResult::~ListSmartGroupResult()
{}

void ListSmartGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["SmartGroup"];
	for (auto valueObjectSmartGroup : allObjectNode)
	{
		SmartGroup objectObject;
		if(!valueObjectSmartGroup["Id"].isNull())
			objectObject.id = valueObjectSmartGroup["Id"].asString();
		if(!valueObjectSmartGroup["Type"].isNull())
			objectObject.type = valueObjectSmartGroup["Type"].asString();
		object_.push_back(objectObject);
	}
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string ListSmartGroupResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListSmartGroupResult::SmartGroup> ListSmartGroupResult::getObject()const
{
	return object_;
}

std::string ListSmartGroupResult::getErrorCode()const
{
	return errorCode_;
}

bool ListSmartGroupResult::getSuccessful()const
{
	return successful_;
}

