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

#include <alibabacloud/cloudauth/model/SubmitVerificationRequest.h>

using AlibabaCloud::Cloudauth::Model::SubmitVerificationRequest;

SubmitVerificationRequest::SubmitVerificationRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "SubmitVerification")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitVerificationRequest::~SubmitVerificationRequest()
{}

long SubmitVerificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitVerificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitVerificationRequest::getBiz()const
{
	return biz_;
}

void SubmitVerificationRequest::setBiz(const std::string& biz)
{
	biz_ = biz;
	setBodyParameter("Biz", biz);
}

std::string SubmitVerificationRequest::getSourceIp()const
{
	return sourceIp_;
}

void SubmitVerificationRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<SubmitVerificationRequest::Material> SubmitVerificationRequest::getMaterial()const
{
	return material_;
}

void SubmitVerificationRequest::setMaterial(const std::vector<Material>& material)
{
	material_ = material;
	for(int dep1 = 0; dep1!= material.size(); dep1++) {
		auto materialObj = material.at(dep1);
		std::string materialObjStr = "Material." + std::to_string(dep1 + 1);
		setParameter(materialObjStr + ".MaterialType", materialObj.materialType);
		setParameter(materialObjStr + ".Value", materialObj.value);
	}
}

std::string SubmitVerificationRequest::getTicketId()const
{
	return ticketId_;
}

void SubmitVerificationRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setBodyParameter("TicketId", ticketId);
}

