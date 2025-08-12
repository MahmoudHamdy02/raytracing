#pragma once

#include <memory>
#include <vector>

#include "hittable.h"
#include "sphere.h"

using std::make_shared;
using std::shared_ptr;

class hittable_list
{
public:
    std::vector<shared_ptr<sphere>> objects;

    hittable_list() {}
    hittable_list(shared_ptr<sphere> object)
    {
        add(object);
    }

    void clear()
    {
        objects.clear();
    }

    void add(shared_ptr<sphere> object)
    {
        objects.push_back(object);
    }

    bool hit(const ray& r, interval ray_t, hit_record& rec) const
    {
        hit_record temp_rec;
        bool hit_anything = false;
        auto closest_so_far = ray_t.max;

        for (const auto& object : objects) {
            if (object->hit(r, interval(ray_t.min, closest_so_far), temp_rec)) {
                hit_anything = true;
                closest_so_far = temp_rec.t;
                rec = temp_rec;
            }
        }

        return hit_anything;
    }
};
