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

#include <alibabacloud/vod/model/DeleteAIImageInfosRequest.h>

using AlibabaCloud::Vod::Model::DeleteAIImageInfosRequest;

DeleteAIImageInfosRequest::DeleteAIImageInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteAIImageInfos")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAIImageInfosRequest::~DeleteAIImageInfosRequest()
{}

long DeleteAIImageInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteAIImageInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteAIImageInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteAIImageInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteAIImageInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteAIImageInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteAIImageInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteAIImageInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteAIImageInfosRequest::getAIImageInfoIds()const
{
	return aIImageInfoIds_;
}

void DeleteAIImageInfosRequest::setAIImageInfoIds(const std::string& aIImageInfoIds)
{
	aIImageInfoIds_ = aIImageInfoIds;
	setParameter("AIImageInfoIds", aIImageInfoIds);
}

