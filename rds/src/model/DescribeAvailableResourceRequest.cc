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

#include <alibabacloud/rds/model/DescribeAvailableResourceRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableResourceRequest;

DescribeAvailableResourceRequest::DescribeAvailableResourceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableResource")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableResourceRequest::~DescribeAvailableResourceRequest()
{}

std::string DescribeAvailableResourceRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeAvailableResourceRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

long DescribeAvailableResourceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableResourceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableResourceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeAvailableResourceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string DescribeAvailableResourceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableResourceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableResourceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableResourceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeAvailableResourceRequest::getEngine()const
{
	return engine_;
}

void DescribeAvailableResourceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeAvailableResourceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAvailableResourceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAvailableResourceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void DescribeAvailableResourceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string DescribeAvailableResourceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableResourceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

int DescribeAvailableResourceRequest::getDispenseMode()const
{
	return dispenseMode_;
}

void DescribeAvailableResourceRequest::setDispenseMode(int dispenseMode)
{
	dispenseMode_ = dispenseMode;
	setParameter("DispenseMode", std::to_string(dispenseMode));
}

std::string DescribeAvailableResourceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableResourceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableResourceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableResourceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableResourceRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribeAvailableResourceRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long DescribeAvailableResourceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableResourceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableResourceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DescribeAvailableResourceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

std::string DescribeAvailableResourceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableResourceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeAvailableResourceRequest::getCategory()const
{
	return category_;
}

void DescribeAvailableResourceRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeAvailableResourceRequest::getOrderType()const
{
	return orderType_;
}

void DescribeAvailableResourceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

