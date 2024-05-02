#ifndef TOPOLOGY_SEARCH_H
#define TOPOLOGY_SEARCH_H

#include <string>
#include <unordered_map>

namespace topology_search{
	bool check_args(ArgumentParser& user_args);
	bool index_link_file(ArgumentParser& user_args, std::unordered_map<int, std::streampos>& index_table);
	int utg_to_int(std::string& utg_id);
}

#endif
