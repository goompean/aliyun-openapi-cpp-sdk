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

#include <alibabacloud/ivpd/model/GetAsyncResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

GetAsyncResultResult::GetAsyncResultResult() :
	ServiceResult()
{}

GetAsyncResultResult::GetAsyncResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAsyncResultResult::~GetAsyncResultResult()
{}

void GetAsyncResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["BatchSize"].isNull())
		data_.batchSize = dataNode["BatchSize"].asString();
	if(!dataNode["Finish"].isNull())
		data_.finish = dataNode["Finish"].asString() == "true";
	if(!dataNode["Progress"].isNull())
		data_.progress = std::stof(dataNode["Progress"].asString());
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["Completed"].isNull())
		data_.completed = dataNode["Completed"].asString() == "true";
	if(!dataNode["TotalUsedTime"].isNull())
		data_.totalUsedTime = std::stol(dataNode["TotalUsedTime"].asString());
	if(!dataNode["Result"].isNull())
		data_.result = dataNode["Result"].asString();
	if(!dataNode["Code"].isNull())
		data_.code = dataNode["Code"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetAsyncResultResult::getMessage()const
{
	return message_;
}

GetAsyncResultResult::Data GetAsyncResultResult::getData()const
{
	return data_;
}

std::string GetAsyncResultResult::getCode()const
{
	return code_;
}

