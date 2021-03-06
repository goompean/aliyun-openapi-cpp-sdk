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

#include <alibabacloud/cloudesl/model/DescribeItemsRequest.h>

using AlibabaCloud::Cloudesl::Model::DescribeItemsRequest;

DescribeItemsRequest::DescribeItemsRequest() :
	RpcServiceRequest("cloudesl", "2018-08-01", "DescribeItems")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeItemsRequest::~DescribeItemsRequest()
{}

std::string DescribeItemsRequest::getStoreId()const
{
	return storeId_;
}

void DescribeItemsRequest::setStoreId(const std::string& storeId)
{
	storeId_ = storeId;
	setParameter("StoreId", storeId);
}

int DescribeItemsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeItemsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long DescribeItemsRequest::getItemId()const
{
	return itemId_;
}

void DescribeItemsRequest::setItemId(long itemId)
{
	itemId_ = itemId;
	setParameter("ItemId", std::to_string(itemId));
}

int DescribeItemsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeItemsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeItemsRequest::getItemBarCode()const
{
	return itemBarCode_;
}

void DescribeItemsRequest::setItemBarCode(const std::string& itemBarCode)
{
	itemBarCode_ = itemBarCode;
	setParameter("ItemBarCode", itemBarCode);
}

bool DescribeItemsRequest::getBePromotion()const
{
	return bePromotion_;
}

void DescribeItemsRequest::setBePromotion(bool bePromotion)
{
	bePromotion_ = bePromotion;
	setParameter("BePromotion", bePromotion ? "true" : "false");
}

std::string DescribeItemsRequest::getItemTitle()const
{
	return itemTitle_;
}

void DescribeItemsRequest::setItemTitle(const std::string& itemTitle)
{
	itemTitle_ = itemTitle;
	setParameter("ItemTitle", itemTitle);
}

std::string DescribeItemsRequest::getShelfCode()const
{
	return shelfCode_;
}

void DescribeItemsRequest::setShelfCode(const std::string& shelfCode)
{
	shelfCode_ = shelfCode;
	setParameter("ShelfCode", shelfCode);
}

std::string DescribeItemsRequest::getSkuId()const
{
	return skuId_;
}

void DescribeItemsRequest::setSkuId(const std::string& skuId)
{
	skuId_ = skuId;
	setParameter("SkuId", skuId);
}

