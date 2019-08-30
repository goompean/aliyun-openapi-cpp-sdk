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

#include <alibabacloud/bssopenapi/model/GetCustomerListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

GetCustomerListResult::GetCustomerListResult() :
	ServiceResult()
{}

GetCustomerListResult::GetCustomerListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomerListResult::~GetCustomerListResult()
{}

void GetCustomerListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allUidList = dataNode["UidList"]["Item"];
		for (auto value : allUidList)
			data_.uidList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCustomerListResult::getMessage()const
{
	return message_;
}

GetCustomerListResult::Data GetCustomerListResult::getData()const
{
	return data_;
}

std::string GetCustomerListResult::getCode()const
{
	return code_;
}

bool GetCustomerListResult::getSuccess()const
{
	return success_;
}
