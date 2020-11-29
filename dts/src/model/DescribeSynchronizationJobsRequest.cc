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

#include <alibabacloud/dts/model/DescribeSynchronizationJobsRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobsRequest;

DescribeSynchronizationJobsRequest::DescribeSynchronizationJobsRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeSynchronizationJobs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobsRequest::~DescribeSynchronizationJobsRequest()
{}

std::string DescribeSynchronizationJobsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeSynchronizationJobsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int DescribeSynchronizationJobsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeSynchronizationJobsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeSynchronizationJobsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSynchronizationJobsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeSynchronizationJobsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSynchronizationJobsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSynchronizationJobsRequest::getSynchronizationJobName()const
{
	return synchronizationJobName_;
}

void DescribeSynchronizationJobsRequest::setSynchronizationJobName(const std::string& synchronizationJobName)
{
	synchronizationJobName_ = synchronizationJobName;
	setParameter("SynchronizationJobName", synchronizationJobName);
}

std::string DescribeSynchronizationJobsRequest::getAccountId()const
{
	return accountId_;
}

void DescribeSynchronizationJobsRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

int DescribeSynchronizationJobsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSynchronizationJobsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

