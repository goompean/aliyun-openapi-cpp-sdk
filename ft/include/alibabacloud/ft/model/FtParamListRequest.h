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

#ifndef ALIBABACLOUD_FT_MODEL_FTPARAMLISTREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_FTPARAMLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT FtParamListRequest : public RpcServiceRequest
			{
			public:
				struct Disk
				{
					std::vector<std::string> size;
					std::vector<std::string> type;
				};

			public:
				FtParamListRequest();
				~FtParamListRequest();

				std::vector<Disk> getDisk()const;
				void setDisk(const std::vector<Disk>& disk);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::vector<Disk> disk_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_FTPARAMLISTREQUEST_H_