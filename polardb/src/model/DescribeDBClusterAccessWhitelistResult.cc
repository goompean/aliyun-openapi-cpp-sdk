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

#include <alibabacloud/polardb/model/DescribeDBClusterAccessWhitelistResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterAccessWhitelistResult::DescribeDBClusterAccessWhitelistResult() :
	ServiceResult()
{}

DescribeDBClusterAccessWhitelistResult::DescribeDBClusterAccessWhitelistResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterAccessWhitelistResult::~DescribeDBClusterAccessWhitelistResult()
{}

void DescribeDBClusterAccessWhitelistResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBClusterIPArray"];
	for (auto value : allItems)
	{
		DBClusterIPArray itemsObject;
		if(!value["DBClusterIPArrayName"].isNull())
			itemsObject.dBClusterIPArrayName = value["DBClusterIPArrayName"].asString();
		if(!value["DBClusterIPArrayAttribute"].isNull())
			itemsObject.dBClusterIPArrayAttribute = value["DBClusterIPArrayAttribute"].asString();
		if(!value["SecurityIps"].isNull())
			itemsObject.securityIps = value["SecurityIps"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBClusterAccessWhitelistResult::DBClusterIPArray> DescribeDBClusterAccessWhitelistResult::getItems()const
{
	return items_;
}
