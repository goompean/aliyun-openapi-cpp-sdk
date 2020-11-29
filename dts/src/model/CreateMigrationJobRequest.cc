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

#include <alibabacloud/dts/model/CreateMigrationJobRequest.h>

using AlibabaCloud::Dts::Model::CreateMigrationJobRequest;

CreateMigrationJobRequest::CreateMigrationJobRequest() :
	RpcServiceRequest("dts", "2020-01-01", "CreateMigrationJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMigrationJobRequest::~CreateMigrationJobRequest()
{}

std::string CreateMigrationJobRequest::getClientToken()const
{
	return clientToken_;
}

void CreateMigrationJobRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateMigrationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMigrationJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string CreateMigrationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMigrationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateMigrationJobRequest::getAccountId()const
{
	return accountId_;
}

void CreateMigrationJobRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string CreateMigrationJobRequest::getRegion()const
{
	return region_;
}

void CreateMigrationJobRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string CreateMigrationJobRequest::getMigrationJobClass()const
{
	return migrationJobClass_;
}

void CreateMigrationJobRequest::setMigrationJobClass(const std::string& migrationJobClass)
{
	migrationJobClass_ = migrationJobClass;
	setParameter("MigrationJobClass", migrationJobClass);
}

