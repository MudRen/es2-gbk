// Mon  08-21-95

inherit NPC;
void create()
{
        seteuid(getuid());
        set_name("��ʯ��",({"worker"}));
        set("gender","����");
        set("age",(random(10)+32));
        set("str",30);
        set("con",20);
        set("combat_exp",(100+random(40)));
        set_temp("apply/dodge",(10+random(5)));
        add_money("coin",50);
        setup();
        carry_object("/obj/cloth")->wear();
        if (random(50) > 30)
        carry_object(__DIR__"obj/hammer")->wield();
        else
        carry_object(__DIR__"obj/rope");
}