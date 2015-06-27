/*
 * Class that represents the Revive
 *
 * Author: Tiamat
 * Date: 21/06/2015
 * License: LGPL. No copyright.
 */
#ifndef REVIVE_H
#define REVIVE_H

#include <core/object.h>
#include <map>

using std::map;

class Texture;
class Font;

class Revive : public Object
{
public:
    Revive(int slot, Object *parent = nullptr);

private:
    int m_slot;
    shared_ptr<Settings> m_settings;
    int m_page;
    int m_max_pages;
    shared_ptr<Font> m_font;

    map<ObjectID, shared_ptr<Texture>> m_textures;

    void draw_self();
    bool on_message(Object *sender, MessageID id, Parameters p);
};

#endif
