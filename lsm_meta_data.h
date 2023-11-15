//
// Created by nitish on 14/11/23.
//

#ifndef POSTGRESQL_LSM_META_DATA_H
#define POSTGRESQL_LSM_META_DATA_H

#include "../../../include/postgres.h"

struct lsm_meta_data
{
    int l0_size;
    int l1_size;
    int l2_size;

    int l0_max_size;
    int l1_max_size;

    Oid l0_id;
    Oid l1_id;
    Oid l2_id;

    Oid rel_id;

    Oid db_id;
    Oid usr_id;

};


#endif //POSTGRESQL_LSM_META_DATA_H
