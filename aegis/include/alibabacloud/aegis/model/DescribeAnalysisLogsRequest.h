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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAnalysisLogsRequest : public RpcServiceRequest
			{

			public:
				DescribeAnalysisLogsRequest();
				~DescribeAnalysisLogsRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getQuery()const;
				void setQuery(const std::string& query);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getFrom()const;
				void setFrom(int from);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				int getTo()const;
				void setTo(int to);
				bool getReverse()const;
				void setReverse(bool reverse);

            private:
				std::string sourceIp_;
				std::string query_;
				int pageSize_;
				int from_;
				int currentPage_;
				int to_;
				bool reverse_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEANALYSISLOGSREQUEST_H_