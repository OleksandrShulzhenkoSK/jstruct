#ifndef BASIC_H
#define BASIC_H
// Generated automatically by libjstruct. Do Not Modify.

#include "generated_jstruct_types.h"
#include <jstruct.h>
#include <json-c/json_object.h>
#include <stdint.h>
#include <stdbool.h>

struct my_json_data {
    uint64_t id;
    int _id;
    bool active;
    double ratio;
    char *name;
    char **tags;
    int tags__length__;
    bool ratio__null__;
};

struct jstruct_object_property my_json_data__jstruct_properties__[] = {
    {
        .schema = "{\n        \"title\": \"ID\",\n        \"description\": \"unique object id\",\n        \"type\": \"int\"\n    }\n    ",
        .name = "id",
        .type = {
            .json=json_type_int,
            .extra=jstruct_extra_type_uint64_t
        },
        .offset=offsetof(struct my_json_data, id)
    },
    {
        .name="active",
        .type={
            .json=json_type_boolean
        },
        .offset=offsetof(struct my_json_data, active)
    },
    {
        .nullable=1,
        .name="ratio",
        .type={
            .json=json_type_double
        },
        .offset=offsetof(struct my_json_data, ratio)
    },
    {
        .name="other_name",
        .type={
            .json=json_type_string
        },
        .offset=offsetof(struct my_json_data, name)
    },
    {
        .name="tags",
        .type={
            .member=json_type_string,
            .json=json_type_array
        },
        .offset=offsetof(struct my_json_data, tags),
        .length_offset=offsetof(struct my_json_data, tags__length__),
        .stride=sizeof(char *),
        .dereference=true
    },
    { NULL }
};

struct my_json_container {
    struct my_json_data main_data;

    /* static arrays are automatic */
    struct my_json_data array_data[5];

    /* pointer arrays need to be annotated */
    //@array
    struct my_json_data *alloc_array_data;
};

struct jstruct_object_property my_json_container__jstruct_properties__[] = {
    {
        .name="main_data",
        .type={
            .json=json_type_object,
            .jstruct=jstruct_type__my_json_data__,
        },
        .offset=offsetof(struct my_json_container, main_data),
    },
    {
        .name="array_data",
        .type={
            .json=json_type_array,
            .member=json_type_object,
            .jstruct=jstruct_type__my_json_data__,
        },
        .offset=offsetof(struct my_json_container, array_data),
        .length=5,
    },
    {
        .name="alloc_array_data",
        .type={
            .json=json_type_array,
            .member=json_type_object,
            .jstruct=jstruct_type__my_json_data__,
        },
        .offset=offsetof(struct my_json_container, alloc_array_data),
    }
};

#endif
