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

#include <alibabacloud/domain/model/SaveBatchTaskForDomainNameProxyServiceRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForDomainNameProxyServiceRequest;

SaveBatchTaskForDomainNameProxyServiceRequest::SaveBatchTaskForDomainNameProxyServiceRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForDomainNameProxyService")
{}

SaveBatchTaskForDomainNameProxyServiceRequest::~SaveBatchTaskForDomainNameProxyServiceRequest()
{}

std::string SaveBatchTaskForDomainNameProxyServiceRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForDomainNameProxyServiceRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::vector<std::string> SaveBatchTaskForDomainNameProxyServiceRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForDomainNameProxyServiceRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

std::string SaveBatchTaskForDomainNameProxyServiceRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForDomainNameProxyServiceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool SaveBatchTaskForDomainNameProxyServiceRequest::getStatus()const
{
	return status_;
}

void SaveBatchTaskForDomainNameProxyServiceRequest::setStatus(bool status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}
