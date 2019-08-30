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

#include <alibabacloud/fnf/model/UpdateFlowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

UpdateFlowResult::UpdateFlowResult() :
	ServiceResult()
{}

UpdateFlowResult::UpdateFlowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateFlowResult::~UpdateFlowResult()
{}

void UpdateFlowResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Definition"].isNull())
		definition_ = value["Definition"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["RoleArn"].isNull())
		roleArn_ = value["RoleArn"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["LastModifiedTime"].isNull())
		lastModifiedTime_ = value["LastModifiedTime"].asString();

}

std::string UpdateFlowResult::getType()const
{
	return type_;
}

std::string UpdateFlowResult::getDescription()const
{
	return description_;
}

std::string UpdateFlowResult::getCreatedTime()const
{
	return createdTime_;
}

std::string UpdateFlowResult::getDefinition()const
{
	return definition_;
}

std::string UpdateFlowResult::getLastModifiedTime()const
{
	return lastModifiedTime_;
}

std::string UpdateFlowResult::getId()const
{
	return id_;
}

std::string UpdateFlowResult::getRoleArn()const
{
	return roleArn_;
}

std::string UpdateFlowResult::getName()const
{
	return name_;
}
