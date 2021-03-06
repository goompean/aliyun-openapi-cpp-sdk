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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSensitiveColumnsRequest;

ListSensitiveColumnsRequest::ListSensitiveColumnsRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSensitiveColumns")
{
	setMethod(HttpRequest::Method::Post);
}

ListSensitiveColumnsRequest::~ListSensitiveColumnsRequest()
{}

std::string ListSensitiveColumnsRequest::getSchemaName()const
{
	return schemaName_;
}

void ListSensitiveColumnsRequest::setSchemaName(const std::string& schemaName)
{
	schemaName_ = schemaName;
	setParameter("SchemaName", schemaName);
}

std::string ListSensitiveColumnsRequest::getColumnName()const
{
	return columnName_;
}

void ListSensitiveColumnsRequest::setColumnName(const std::string& columnName)
{
	columnName_ = columnName;
	setParameter("ColumnName", columnName);
}

long ListSensitiveColumnsRequest::getTid()const
{
	return tid_;
}

void ListSensitiveColumnsRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

int ListSensitiveColumnsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListSensitiveColumnsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListSensitiveColumnsRequest::getSecurityLevel()const
{
	return securityLevel_;
}

void ListSensitiveColumnsRequest::setSecurityLevel(const std::string& securityLevel)
{
	securityLevel_ = securityLevel;
	setParameter("SecurityLevel", securityLevel);
}

int ListSensitiveColumnsRequest::getPageSize()const
{
	return pageSize_;
}

void ListSensitiveColumnsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListSensitiveColumnsRequest::getTableName()const
{
	return tableName_;
}

void ListSensitiveColumnsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

