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

#include <alibabacloud/ros/model/CreateChangeSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

CreateChangeSetResult::CreateChangeSetResult() :
	ServiceResult()
{}

CreateChangeSetResult::CreateChangeSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateChangeSetResult::~CreateChangeSetResult()
{}

void CreateChangeSetResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["ChangeSetId"].isNull())
		changeSetId_ = value["ChangeSetId"].asString();
	if(!value["StackId"].isNull())
		stackId_ = value["StackId"].asString();

}

std::string CreateChangeSetResult::getChangeSetId()const
{
	return changeSetId_;
}

std::string CreateChangeSetResult::getStackId()const
{
	return stackId_;
}
