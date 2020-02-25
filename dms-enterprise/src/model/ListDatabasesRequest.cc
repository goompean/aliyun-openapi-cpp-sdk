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

#include <alibabacloud/dms-enterprise/model/ListDatabasesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDatabasesRequest;

ListDatabasesRequest::ListDatabasesRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDatabases")
{
	setMethod(HttpRequest::Method::Get);
}

ListDatabasesRequest::~ListDatabasesRequest()
{}

std::string ListDatabasesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListDatabasesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListDatabasesRequest::getPageSize()const
{
	return pageSize_;
}

void ListDatabasesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListDatabasesRequest::getTid()const
{
	return tid_;
}

void ListDatabasesRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

int ListDatabasesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDatabasesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

