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

#include <alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetPipelineInstanceBuildNumberStatusResult::GetPipelineInstanceBuildNumberStatusResult() :
	ServiceResult()
{}

GetPipelineInstanceBuildNumberStatusResult::GetPipelineInstanceBuildNumberStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPipelineInstanceBuildNumberStatusResult::~GetPipelineInstanceBuildNumberStatusResult()
{}

void GetPipelineInstanceBuildNumberStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["Status"].isNull())
		object_.status = objectNode["Status"].asString();
	auto allGroupsNode = objectNode["Groups"]["group"];
	for (auto objectNodeGroupsgroup : allGroupsNode)
	{
		Object::Group groupObject;
		if(!objectNodeGroupsgroup["Name"].isNull())
			groupObject.name = objectNodeGroupsgroup["Name"].asString();
		if(!objectNodeGroupsgroup["Status"].isNull())
			groupObject.status = objectNodeGroupsgroup["Status"].asString();
		auto allStagesNode = objectNodeGroupsgroup["Stages"]["stage"];
		for (auto objectNodeGroupsgroupStagesstage : allStagesNode)
		{
			Object::Group::Stage stagesObject;
			if(!objectNodeGroupsgroupStagesstage["Status"].isNull())
				stagesObject.status = objectNodeGroupsgroupStagesstage["Status"].asString();
			if(!objectNodeGroupsgroupStagesstage["Sign"].isNull())
				stagesObject.sign = objectNodeGroupsgroupStagesstage["Sign"].asString();
			auto allComponentsNode = objectNodeGroupsgroupStagesstage["Components"]["component"];
			for (auto objectNodeGroupsgroupStagesstageComponentscomponent : allComponentsNode)
			{
				Object::Group::Stage::Component componentsObject;
				if(!objectNodeGroupsgroupStagesstageComponentscomponent["Name"].isNull())
					componentsObject.name = objectNodeGroupsgroupStagesstageComponentscomponent["Name"].asString();
				if(!objectNodeGroupsgroupStagesstageComponentscomponent["Status"].isNull())
					componentsObject.status = objectNodeGroupsgroupStagesstageComponentscomponent["Status"].asString();
				if(!objectNodeGroupsgroupStagesstageComponentscomponent["JobId"].isNull())
					componentsObject.jobId = std::stol(objectNodeGroupsgroupStagesstageComponentscomponent["JobId"].asString());
				stagesObject.components.push_back(componentsObject);
			}
			groupObject.stages.push_back(stagesObject);
		}
		object_.groups.push_back(groupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetPipelineInstanceBuildNumberStatusResult::Object GetPipelineInstanceBuildNumberStatusResult::getObject()const
{
	return object_;
}

std::string GetPipelineInstanceBuildNumberStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPipelineInstanceBuildNumberStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPipelineInstanceBuildNumberStatusResult::getSuccess()const
{
	return success_;
}

