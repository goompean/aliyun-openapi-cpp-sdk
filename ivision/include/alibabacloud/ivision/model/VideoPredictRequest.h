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

#ifndef ALIBABACLOUD_IVISION_MODEL_VIDEOPREDICTREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_VIDEOPREDICTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT VideoPredictRequest : public RpcServiceRequest
			{

			public:
				VideoPredictRequest();
				~VideoPredictRequest();

				std::string getDataUrl()const;
				void setDataUrl(const std::string& dataUrl);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getNotify()const;
				void setNotify(const std::string& notify);
				std::string getOutput()const;
				void setOutput(const std::string& output);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getModels()const;
				void setModels(const std::string& models);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string dataUrl_;
				std::string clientToken_;
				std::string notify_;
				std::string output_;
				std::string showLog_;
				std::string models_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_VIDEOPREDICTREQUEST_H_