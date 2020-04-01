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

#include <alibabacloud/oos/model/StartExecutionRequest.h>

using AlibabaCloud::Oos::Model::StartExecutionRequest;

StartExecutionRequest::StartExecutionRequest() :
	RpcServiceRequest("oos", "2019-06-01", "StartExecution")
{
	setMethod(HttpRequest::Method::Post);
}

StartExecutionRequest::~StartExecutionRequest()
{}

std::string StartExecutionRequest::getClientToken()const
{
	return clientToken_;
}

void StartExecutionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string StartExecutionRequest::getDescription()const
{
	return description_;
}

void StartExecutionRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string StartExecutionRequest::getMode()const
{
	return mode_;
}

void StartExecutionRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string StartExecutionRequest::getTemplateVersion()const
{
	return templateVersion_;
}

void StartExecutionRequest::setTemplateVersion(const std::string& templateVersion)
{
	templateVersion_ = templateVersion;
	setParameter("TemplateVersion", templateVersion);
}

std::string StartExecutionRequest::getRegionId()const
{
	return regionId_;
}

void StartExecutionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string StartExecutionRequest::getTemplateName()const
{
	return templateName_;
}

void StartExecutionRequest::setTemplateName(const std::string& templateName)
{
	templateName_ = templateName;
	setParameter("TemplateName", templateName);
}

std::string StartExecutionRequest::getLoopMode()const
{
	return loopMode_;
}

void StartExecutionRequest::setLoopMode(const std::string& loopMode)
{
	loopMode_ = loopMode;
	setParameter("LoopMode", loopMode);
}

std::string StartExecutionRequest::getSafetyCheck()const
{
	return safetyCheck_;
}

void StartExecutionRequest::setSafetyCheck(const std::string& safetyCheck)
{
	safetyCheck_ = safetyCheck;
	setParameter("SafetyCheck", safetyCheck);
}

std::map<std::string, std::string> StartExecutionRequest::getTags()const
{
	return tags_;
}

void StartExecutionRequest::setTags(const std::map<std::string, std::string>& tags)
{
	tags_ = tags;
	setJsonParameters("Tags", tags);
}

std::string StartExecutionRequest::getParentExecutionId()const
{
	return parentExecutionId_;
}

void StartExecutionRequest::setParentExecutionId(const std::string& parentExecutionId)
{
	parentExecutionId_ = parentExecutionId;
	setParameter("ParentExecutionId", parentExecutionId);
}

std::string StartExecutionRequest::getParameters()const
{
	return parameters_;
}

void StartExecutionRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

