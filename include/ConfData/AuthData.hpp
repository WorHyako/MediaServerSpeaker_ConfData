#pragma once

#include "Wor/Sql/DataBaseParameters.hpp"

namespace Mss::ConfData {
	/**
	 * @brief
	 *
	 * @author WorHyako
	 */
	static const Wor::Sql::DataBaseParameters authParameters("dbType=mysql "
															 "dbName=events "
															 "user=user "
															 "password=user "
															 "host=127.0.0.1 "
															 "port=3306");
}
