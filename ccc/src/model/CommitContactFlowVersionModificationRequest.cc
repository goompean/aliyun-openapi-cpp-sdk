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

#include <alibabacloud/ccc/model/CommitContactFlowVersionModificationRequest.h>

using AlibabaCloud::CCC::Model::CommitContactFlowVersionModificationRequest;

CommitContactFlowVersionModificationRequest::CommitContactFlowVersionModificationRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CommitContactFlowVersionModification")
{
	setMethod(HttpRequest::Method::Post);
}

CommitContactFlowVersionModificationRequest::~CommitContactFlowVersionModificationRequest()
{}

std::string CommitContactFlowVersionModificationRequest::getCanvas()const
{
	return canvas_;
}

void CommitContactFlowVersionModificationRequest::setCanvas(const std::string& canvas)
{
	canvas_ = canvas;
	setBodyParameter("Canvas", canvas);
}

std::string CommitContactFlowVersionModificationRequest::getContent()const
{
	return content_;
}

void CommitContactFlowVersionModificationRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string CommitContactFlowVersionModificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CommitContactFlowVersionModificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CommitContactFlowVersionModificationRequest::getInstanceId()const
{
	return instanceId_;
}

void CommitContactFlowVersionModificationRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CommitContactFlowVersionModificationRequest::getContactFlowVersionId()const
{
	return contactFlowVersionId_;
}

void CommitContactFlowVersionModificationRequest::setContactFlowVersionId(const std::string& contactFlowVersionId)
{
	contactFlowVersionId_ = contactFlowVersionId;
	setParameter("ContactFlowVersionId", contactFlowVersionId);
}

