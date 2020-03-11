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

#include <alibabacloud/dds/model/DescribeInstanceAutoRenewalAttributeRequest.h>

using AlibabaCloud::Dds::Model::DescribeInstanceAutoRenewalAttributeRequest;

DescribeInstanceAutoRenewalAttributeRequest::DescribeInstanceAutoRenewalAttributeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeInstanceAutoRenewalAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstanceAutoRenewalAttributeRequest::~DescribeInstanceAutoRenewalAttributeRequest()
{}

long DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceAutoRenewalAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getDBInstanceType()const
{
	return dBInstanceType_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setDBInstanceType(const std::string& dBInstanceType)
{
	dBInstanceType_ = dBInstanceType;
	setParameter("DBInstanceType", dBInstanceType);
}

