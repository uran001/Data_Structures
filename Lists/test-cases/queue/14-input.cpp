
    #include "catch.hpp"
    #include "MyQueueImpl.h"
    #include <queue>
    #include <stdexcept>
    #include <iostream>
    using namespace std;
    TEST_CASE( "test queue with (capacity, len_cmd) = (279,1978)") {

    queue<int> ref;
    MyQueueImpl<int,static_cast<size_t>(279)> submit;
    int ret_ref;
    int ret_submit;

//==============================
    submit.push(7366);
    ref.push(7366);

//len_list: 1
//==============================


//==============================
    submit.push(3765);
    ref.push(3765);

//len_list: 2
//==============================


//==============================
    submit.push(2606);
    ref.push(2606);

//len_list: 3
//==============================


//==============================
    submit.push(1899);
    ref.push(1899);

//len_list: 4
//==============================


//==============================
    submit.push(3975);
    ref.push(3975);

//len_list: 5
//==============================


//==============================
    submit.push(1975);
    ref.push(1975);

//len_list: 6
//==============================


//==============================
    submit.push(2853);
    ref.push(2853);

//len_list: 7
//==============================


//==============================
    submit.push(9845);
    ref.push(9845);

//len_list: 8
//==============================


//==============================
    submit.push(301);
    ref.push(301);

//len_list: 9
//==============================


//==============================
    submit.push(9379);
    ref.push(9379);

//len_list: 10
//==============================


//==============================
    submit.push(6667);
    ref.push(6667);

//len_list: 11
//==============================


//==============================
    submit.push(9623);
    ref.push(9623);

//len_list: 12
//==============================


//==============================
    submit.push(8300);
    ref.push(8300);

//len_list: 13
//==============================


//==============================
    submit.push(2333);
    ref.push(2333);

//len_list: 14
//==============================


//==============================
    submit.push(9845);
    ref.push(9845);

//len_list: 15
//==============================


//==============================
    submit.push(3022);
    ref.push(3022);

//len_list: 16
//==============================


//==============================
    submit.push(2989);
    ref.push(2989);

//len_list: 17
//==============================


//==============================
    submit.push(9134);
    ref.push(9134);

//len_list: 18
//==============================


//==============================
    submit.push(4166);
    ref.push(4166);

//len_list: 19
//==============================


//==============================
    submit.push(6288);
    ref.push(6288);

//len_list: 20
//==============================


//==============================
    submit.push(3389);
    ref.push(3389);

//len_list: 21
//==============================


//==============================
    submit.push(4796);
    ref.push(4796);

//len_list: 22
//==============================


//==============================
    submit.push(2410);
    ref.push(2410);

//len_list: 23
//==============================


//==============================
    submit.push(5842);
    ref.push(5842);

//len_list: 24
//==============================


//==============================
    submit.push(1226);
    ref.push(1226);

//len_list: 25
//==============================


//==============================
    submit.push(5996);
    ref.push(5996);

//len_list: 26
//==============================


//==============================
    submit.push(9075);
    ref.push(9075);

//len_list: 27
//==============================


//==============================
    submit.push(2392);
    ref.push(2392);

//len_list: 28
//==============================


//==============================
    submit.push(6147);
    ref.push(6147);

//len_list: 29
//==============================


//==============================
    submit.push(393);
    ref.push(393);

//len_list: 30
//==============================


//==============================
    submit.push(5936);
    ref.push(5936);

//len_list: 31
//==============================


//==============================
    submit.push(4044);
    ref.push(4044);

//len_list: 32
//==============================


//==============================
    submit.push(553);
    ref.push(553);

//len_list: 33
//==============================


//==============================
    submit.push(5448);
    ref.push(5448);

//len_list: 34
//==============================


//==============================
    submit.push(6468);
    ref.push(6468);

//len_list: 35
//==============================


//==============================
    submit.push(3663);
    ref.push(3663);

//len_list: 36
//==============================


//==============================
    submit.push(9304);
    ref.push(9304);

//len_list: 37
//==============================


//==============================
    submit.push(1179);
    ref.push(1179);

//len_list: 38
//==============================


//==============================
    submit.push(2986);
    ref.push(2986);

//len_list: 39
//==============================


//==============================
    submit.push(702);
    ref.push(702);

//len_list: 40
//==============================


//==============================
    submit.push(8434);
    ref.push(8434);

//len_list: 41
//==============================


//==============================
    submit.push(1105);
    ref.push(1105);

//len_list: 42
//==============================


//==============================
    submit.push(8166);
    ref.push(8166);

//len_list: 43
//==============================


//==============================
    submit.push(1713);
    ref.push(1713);

//len_list: 44
//==============================


//==============================
    submit.push(7617);
    ref.push(7617);

//len_list: 45
//==============================


//==============================
    submit.push(7176);
    ref.push(7176);

//len_list: 46
//==============================


//==============================
    submit.push(6045);
    ref.push(6045);

//len_list: 47
//==============================


//==============================
    submit.push(5961);
    ref.push(5961);

//len_list: 48
//==============================


//==============================
    submit.push(6623);
    ref.push(6623);

//len_list: 49
//==============================


//==============================
    submit.push(6423);
    ref.push(6423);

//len_list: 50
//==============================


//==============================
    submit.push(6651);
    ref.push(6651);

//len_list: 51
//==============================


//==============================
    submit.push(6302);
    ref.push(6302);

//len_list: 52
//==============================


//==============================
    submit.push(9656);
    ref.push(9656);

//len_list: 53
//==============================


//==============================
    submit.push(5799);
    ref.push(5799);

//len_list: 54
//==============================


//==============================
    submit.push(3883);
    ref.push(3883);

//len_list: 55
//==============================


//==============================
    submit.push(4336);
    ref.push(4336);

//len_list: 56
//==============================


//==============================
    submit.push(7280);
    ref.push(7280);

//len_list: 57
//==============================


//==============================
    submit.push(512);
    ref.push(512);

//len_list: 58
//==============================


//==============================
    submit.push(735);
    ref.push(735);

//len_list: 59
//==============================


//==============================
    submit.push(6124);
    ref.push(6124);

//len_list: 60
//==============================


//==============================
    submit.push(866);
    ref.push(866);

//len_list: 61
//==============================


//==============================
    submit.push(5410);
    ref.push(5410);

//len_list: 62
//==============================


//==============================
    submit.push(6006);
    ref.push(6006);

//len_list: 63
//==============================


//==============================
    submit.push(9543);
    ref.push(9543);

//len_list: 64
//==============================


//==============================
    submit.push(3113);
    ref.push(3113);

//len_list: 65
//==============================


//==============================
    submit.push(4646);
    ref.push(4646);

//len_list: 66
//==============================


//==============================
    submit.push(784);
    ref.push(784);

//len_list: 67
//==============================


//==============================
    submit.push(9937);
    ref.push(9937);

//len_list: 68
//==============================


//==============================
    submit.push(2141);
    ref.push(2141);

//len_list: 69
//==============================


//==============================
    submit.push(3759);
    ref.push(3759);

//len_list: 70
//==============================


//==============================
    submit.push(3357);
    ref.push(3357);

//len_list: 71
//==============================


//==============================
    submit.push(7309);
    ref.push(7309);

//len_list: 72
//==============================


//==============================
    submit.push(1094);
    ref.push(1094);

//len_list: 73
//==============================


//==============================
    submit.push(982);
    ref.push(982);

//len_list: 74
//==============================


//==============================
    submit.push(312);
    ref.push(312);

//len_list: 75
//==============================


//==============================
    submit.push(3597);
    ref.push(3597);

//len_list: 76
//==============================


//==============================
    submit.push(4622);
    ref.push(4622);

//len_list: 77
//==============================


//==============================
    submit.push(5066);
    ref.push(5066);

//len_list: 78
//==============================


//==============================
    submit.push(6755);
    ref.push(6755);

//len_list: 79
//==============================


//==============================
    submit.push(7702);
    ref.push(7702);

//len_list: 80
//==============================


//==============================
    submit.push(7073);
    ref.push(7073);

//len_list: 81
//==============================


//==============================
    submit.push(4812);
    ref.push(4812);

//len_list: 82
//==============================


//==============================
    submit.push(3765);
    ref.push(3765);

//len_list: 83
//==============================


//==============================
    submit.push(1061);
    ref.push(1061);

//len_list: 84
//==============================


//==============================
    submit.push(4617);
    ref.push(4617);

//len_list: 85
//==============================


//==============================
    submit.push(3675);
    ref.push(3675);

//len_list: 86
//==============================


//==============================
    submit.push(3175);
    ref.push(3175);

//len_list: 87
//==============================


//==============================
    submit.push(9898);
    ref.push(9898);

//len_list: 88
//==============================


//==============================
    submit.push(924);
    ref.push(924);

//len_list: 89
//==============================


//==============================
    submit.push(6673);
    ref.push(6673);

//len_list: 90
//==============================


//==============================
    submit.push(7797);
    ref.push(7797);

//len_list: 91
//==============================


//==============================
    submit.push(9857);
    ref.push(9857);

//len_list: 92
//==============================


//==============================
    submit.push(2633);
    ref.push(2633);

//len_list: 93
//==============================


//==============================
    submit.push(7006);
    ref.push(7006);

//len_list: 94
//==============================


//==============================
    submit.push(3738);
    ref.push(3738);

//len_list: 95
//==============================


//==============================
    submit.push(649);
    ref.push(649);

//len_list: 96
//==============================


//==============================
    submit.push(919);
    ref.push(919);

//len_list: 97
//==============================


//==============================
    submit.push(4672);
    ref.push(4672);

//len_list: 98
//==============================


//==============================
    submit.push(9625);
    ref.push(9625);

//len_list: 99
//==============================


//==============================
    submit.push(8179);
    ref.push(8179);

//len_list: 100
//==============================


//==============================
    submit.push(2258);
    ref.push(2258);

//len_list: 101
//==============================


//==============================
    submit.push(7781);
    ref.push(7781);

//len_list: 102
//==============================


//==============================
    submit.push(4555);
    ref.push(4555);

//len_list: 103
//==============================


//==============================
    submit.push(9931);
    ref.push(9931);

//len_list: 104
//==============================


//==============================
    submit.push(8543);
    ref.push(8543);

//len_list: 105
//==============================


//==============================
    submit.push(521);
    ref.push(521);

//len_list: 106
//==============================


//==============================
    submit.push(4591);
    ref.push(4591);

//len_list: 107
//==============================


//==============================
    submit.push(523);
    ref.push(523);

//len_list: 108
//==============================


//==============================
    submit.push(2590);
    ref.push(2590);

//len_list: 109
//==============================


//==============================
    submit.push(2750);
    ref.push(2750);

//len_list: 110
//==============================


//==============================
    submit.push(5671);
    ref.push(5671);

//len_list: 111
//==============================


//==============================
    submit.push(6849);
    ref.push(6849);

//len_list: 112
//==============================


//==============================
    submit.push(9714);
    ref.push(9714);

//len_list: 113
//==============================


//==============================
    submit.push(462);
    ref.push(462);

//len_list: 114
//==============================


//==============================
    submit.push(6291);
    ref.push(6291);

//len_list: 115
//==============================


//==============================
    submit.push(9502);
    ref.push(9502);

//len_list: 116
//==============================


//==============================
    submit.push(7119);
    ref.push(7119);

//len_list: 117
//==============================


//==============================
    submit.push(9268);
    ref.push(9268);

//len_list: 118
//==============================


//==============================
    submit.push(9166);
    ref.push(9166);

//len_list: 119
//==============================


//==============================
    submit.push(5790);
    ref.push(5790);

//len_list: 120
//==============================


//==============================
    submit.push(5445);
    ref.push(5445);

//len_list: 121
//==============================


//==============================
    submit.push(3699);
    ref.push(3699);

//len_list: 122
//==============================


//==============================
    submit.push(234);
    ref.push(234);

//len_list: 123
//==============================


//==============================
    submit.push(2132);
    ref.push(2132);

//len_list: 124
//==============================


//==============================
    submit.push(3055);
    ref.push(3055);

//len_list: 125
//==============================


//==============================
    submit.push(724);
    ref.push(724);

//len_list: 126
//==============================


//==============================
    submit.push(5496);
    ref.push(5496);

//len_list: 127
//==============================


//==============================
    submit.push(6421);
    ref.push(6421);

//len_list: 128
//==============================


//==============================
    submit.push(4314);
    ref.push(4314);

//len_list: 129
//==============================


//==============================
    submit.push(3295);
    ref.push(3295);

//len_list: 130
//==============================


//==============================
    submit.push(4946);
    ref.push(4946);

//len_list: 131
//==============================


//==============================
    submit.push(5358);
    ref.push(5358);

//len_list: 132
//==============================


//==============================
    submit.push(3156);
    ref.push(3156);

//len_list: 133
//==============================


//==============================
    submit.push(7641);
    ref.push(7641);

//len_list: 134
//==============================


//==============================
    submit.push(678);
    ref.push(678);

//len_list: 135
//==============================


//==============================
    submit.push(4613);
    ref.push(4613);

//len_list: 136
//==============================


//==============================
    submit.push(4156);
    ref.push(4156);

//len_list: 137
//==============================


//==============================
    submit.push(6612);
    ref.push(6612);

//len_list: 138
//==============================


//==============================
    submit.push(753);
    ref.push(753);

//len_list: 139
//==============================


//==============================
    submit.push(1633);
    ref.push(1633);

//len_list: 140
//==============================


//==============================
    submit.push(3861);
    ref.push(3861);

//len_list: 141
//==============================


//==============================
    submit.push(9142);
    ref.push(9142);

//len_list: 142
//==============================


//==============================
    submit.push(5204);
    ref.push(5204);

//len_list: 143
//==============================


//==============================
    submit.push(567);
    ref.push(567);

//len_list: 144
//==============================


//==============================
    submit.push(8446);
    ref.push(8446);

//len_list: 145
//==============================


//==============================
    submit.push(5001);
    ref.push(5001);

//len_list: 146
//==============================


//==============================
    submit.push(4147);
    ref.push(4147);

//len_list: 147
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1
    REQUIRE( ret_ref == ret_submit);
//len_list: 147
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 2
    REQUIRE( ret_ref == ret_submit);
//len_list: 147
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 3
    REQUIRE( ret_ref == ret_submit);
//len_list: 147
//==============================


//==============================
    submit.push(3475);
    ref.push(3475);

//len_list: 148
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 4
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 147
//==============================


//==============================
    submit.push(9945);
    ref.push(9945);

//len_list: 148
//==============================


//==============================
    submit.push(5737);
    ref.push(5737);

//len_list: 149
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 5
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    submit.push(8429);
    ref.push(8429);

//len_list: 150
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 6
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 7
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.push(4460);
    ref.push(4460);

//len_list: 151
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 8
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 9
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 10
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 150
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 11
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 12
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 13
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 149
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 14
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 15
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 16
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 17
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 18
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 148
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 19
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 20
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 21
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 22
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    submit.push(696);
    ref.push(696);

//len_list: 149
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 148
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 23
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 24
    REQUIRE( ret_ref == ret_submit);
//len_list: 148
//==============================


//==============================
    submit.push(327);
    ref.push(327);

//len_list: 149
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 25
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    submit.push(5526);
    ref.push(5526);

//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 26
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 27
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.push(3680);
    ref.push(3680);

//len_list: 151
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 150
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 28
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.push(8175);
    ref.push(8175);

//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 29
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 30
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 150
//==============================


//==============================
    submit.push(9394);
    ref.push(9394);

//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 31
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.push(4262);
    ref.push(4262);

//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 32
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 33
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 34
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 35
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 36
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 37
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 150
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 38
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 39
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 40
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 149
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 148
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 147
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 41
    REQUIRE( ret_ref == ret_submit);
//len_list: 147
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 42
    REQUIRE( ret_ref == ret_submit);
//len_list: 147
//==============================


//==============================
    submit.push(777);
    ref.push(777);

//len_list: 148
//==============================


//==============================
    submit.push(9152);
    ref.push(9152);

//len_list: 149
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 43
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 44
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    submit.push(9930);
    ref.push(9930);

//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 45
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 46
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.push(3886);
    ref.push(3886);

//len_list: 151
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 150
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 47
    REQUIRE( ret_ref == ret_submit);
//len_list: 150
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 149
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 48
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 49
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 50
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 51
    REQUIRE( ret_ref == ret_submit);
//len_list: 149
//==============================


//==============================
    submit.push(1661);
    ref.push(1661);

//len_list: 150
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 149
//==============================


//==============================
    submit.push(5305);
    ref.push(5305);

//len_list: 150
//==============================


//==============================
    submit.push(4784);
    ref.push(4784);

//len_list: 151
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 52
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 53
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.push(6996);
    ref.push(6996);

//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 54
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 55
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 56
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 151
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 57
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 58
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 59
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 60
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.push(738);
    ref.push(738);

//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 61
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 62
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 63
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 64
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 65
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 66
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 67
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 68
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 69
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 70
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 71
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 72
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 73
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 74
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 75
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 76
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 77
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 151
//==============================


//==============================
    submit.push(2234);
    ref.push(2234);

//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 78
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(1404);
    ref.push(1404);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 79
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 80
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 81
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 82
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 83
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 84
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 85
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(6291);
    ref.push(6291);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 86
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 87
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.push(4916);
    ref.push(4916);

//len_list: 154
//==============================


//==============================
    submit.push(1146);
    ref.push(1146);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 88
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 89
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 90
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 91
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 153
//==============================


//==============================
    submit.push(1280);
    ref.push(1280);

//len_list: 154
//==============================


//==============================
    submit.push(3489);
    ref.push(3489);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 92
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 93
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 94
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 95
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 96
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 97
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 98
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 99
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 100
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    submit.push(9490);
    ref.push(9490);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 101
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 102
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 103
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 104
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 105
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(4460);
    ref.push(4460);

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 106
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 107
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 108
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    submit.push(3102);
    ref.push(3102);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 109
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 110
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(4098);
    ref.push(4098);

//len_list: 156
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 111
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 112
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 113
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 114
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 115
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 116
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 117
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 118
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 119
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 120
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 121
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 122
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 123
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 124
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 125
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 126
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 127
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 128
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(9871);
    ref.push(9871);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 129
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.push(2425);
    ref.push(2425);

//len_list: 154
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 130
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    submit.push(400);
    ref.push(400);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 131
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 132
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 133
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 134
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 135
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    submit.push(7197);
    ref.push(7197);

//len_list: 155
//==============================


//==============================
    submit.push(3784);
    ref.push(3784);

//len_list: 156
//==============================


//==============================
    submit.push(5019);
    ref.push(5019);

//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 136
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 137
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 138
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 139
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 140
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 141
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 142
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 143
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 144
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    submit.push(398);
    ref.push(398);

//len_list: 156
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 145
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 146
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    submit.push(7184);
    ref.push(7184);

//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 147
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 148
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 149
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(158);
    ref.push(158);

//len_list: 156
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 150
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    submit.push(2457);
    ref.push(2457);

//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 151
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 152
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    submit.push(2161);
    ref.push(2161);

//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 153
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 154
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 155
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 156
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 157
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 158
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 159
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    submit.push(267);
    ref.push(267);

//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 160
    REQUIRE( ret_ref == ret_submit);
//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 161
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 162
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 163
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(5000);
    ref.push(5000);

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 153
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 164
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 165
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 166
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 167
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 168
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 169
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 170
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(9585);
    ref.push(9585);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 171
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 172
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 173
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    submit.push(4484);
    ref.push(4484);

//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    submit.push(6590);
    ref.push(6590);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 174
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 175
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 176
    REQUIRE( ret_ref == ret_submit);
//len_list: 151
//==============================


//==============================
    submit.push(6131);
    ref.push(6131);

//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 177
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 178
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 179
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(3991);
    ref.push(3991);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 180
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 181
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 182
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 183
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 184
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 185
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 186
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 187
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(622);
    ref.push(622);

//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 188
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 189
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 190
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 191
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(7501);
    ref.push(7501);

//len_list: 153
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 192
    REQUIRE( ret_ref == ret_submit);
//len_list: 153
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 193
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 194
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 195
    REQUIRE( ret_ref == ret_submit);
//len_list: 152
//==============================


//==============================
    submit.push(957);
    ref.push(957);

//len_list: 153
//==============================


//==============================
    submit.push(7302);
    ref.push(7302);

//len_list: 154
//==============================


//==============================
    submit.push(3026);
    ref.push(3026);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 196
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    submit.push(8610);
    ref.push(8610);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 197
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    submit.push(1174);
    ref.push(1174);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 198
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 199
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 200
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 154
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 201
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 202
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 203
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 204
    REQUIRE( ret_ref == ret_submit);
//len_list: 154
//==============================


//==============================
    submit.push(7793);
    ref.push(7793);

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 205
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 206
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 207
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 208
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 209
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 210
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 211
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(7384);
    ref.push(7384);

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 212
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 213
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 214
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 215
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(8605);
    ref.push(8605);

//len_list: 156
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 155
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 216
    REQUIRE( ret_ref == ret_submit);
//len_list: 155
//==============================


//==============================
    submit.push(3326);
    ref.push(3326);

//len_list: 156
//==============================


//==============================
    submit.push(2736);
    ref.push(2736);

//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 217
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.push(315);
    ref.push(315);

//len_list: 158
//==============================


//==============================
    submit.push(6733);
    ref.push(6733);

//len_list: 159
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 218
    REQUIRE( ret_ref == ret_submit);
//len_list: 159
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 219
    REQUIRE( ret_ref == ret_submit);
//len_list: 159
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 158
//==============================


//==============================
    submit.push(5897);
    ref.push(5897);

//len_list: 159
//==============================


//==============================
    submit.push(1125);
    ref.push(1125);

//len_list: 160
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 220
    REQUIRE( ret_ref == ret_submit);
//len_list: 160
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 221
    REQUIRE( ret_ref == ret_submit);
//len_list: 160
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 159
//==============================


//==============================
    submit.push(2489);
    ref.push(2489);

//len_list: 160
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 159
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 222
    REQUIRE( ret_ref == ret_submit);
//len_list: 159
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 158
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 157
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 223
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 224
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 225
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.push(9353);
    ref.push(9353);

//len_list: 158
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 157
//==============================


//==============================
    submit.push(8171);
    ref.push(8171);

//len_list: 158
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 226
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 157
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 156
//==============================


//==============================
    submit.push(9465);
    ref.push(9465);

//len_list: 157
//==============================


//==============================
    submit.push(1827);
    ref.push(1827);

//len_list: 158
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 227
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 157
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 228
    REQUIRE( ret_ref == ret_submit);
//len_list: 157
//==============================


//==============================
    submit.push(7817);
    ref.push(7817);

//len_list: 158
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 229
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 230
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 231
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 232
    REQUIRE( ret_ref == ret_submit);
//len_list: 158
//==============================


//==============================
    submit.push(991);
    ref.push(991);

//len_list: 159
//==============================


//==============================
    submit.push(3267);
    ref.push(3267);

//len_list: 160
//==============================


//==============================
    submit.push(1103);
    ref.push(1103);

//len_list: 161
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 233
    REQUIRE( ret_ref == ret_submit);
//len_list: 161
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 160
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 234
    REQUIRE( ret_ref == ret_submit);
//len_list: 160
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 235
    REQUIRE( ret_ref == ret_submit);
//len_list: 160
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 236
    REQUIRE( ret_ref == ret_submit);
//len_list: 160
//==============================


//==============================
    submit.push(6686);
    ref.push(6686);

//len_list: 161
//==============================


//==============================
    submit.push(1965);
    ref.push(1965);

//len_list: 162
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 237
    REQUIRE( ret_ref == ret_submit);
//len_list: 162
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 161
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 238
    REQUIRE( ret_ref == ret_submit);
//len_list: 161
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 239
    REQUIRE( ret_ref == ret_submit);
//len_list: 161
//==============================


//==============================
    submit.push(9288);
    ref.push(9288);

//len_list: 162
//==============================


//==============================
    submit.push(7384);
    ref.push(7384);

//len_list: 163
//==============================


//==============================
    submit.push(9966);
    ref.push(9966);

//len_list: 164
//==============================


//==============================
    submit.push(8281);
    ref.push(8281);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 240
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 241
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 242
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(9544);
    ref.push(9544);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 243
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 244
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 245
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 246
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 247
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(5030);
    ref.push(5030);

//len_list: 166
//==============================


//==============================
    submit.push(5059);
    ref.push(5059);

//len_list: 167
//==============================


//==============================
    submit.push(9372);
    ref.push(9372);

//len_list: 168
//==============================


//==============================
    submit.push(2862);
    ref.push(2862);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 248
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(5092);
    ref.push(5092);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 249
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 250
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(5962);
    ref.push(5962);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 251
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 252
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 253
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(2828);
    ref.push(2828);

//len_list: 172
//==============================


//==============================
    submit.push(422);
    ref.push(422);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.push(1738);
    ref.push(1738);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 254
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 255
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 256
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.push(5809);
    ref.push(5809);

//len_list: 172
//==============================


//==============================
    submit.push(9927);
    ref.push(9927);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.push(6876);
    ref.push(6876);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 257
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 258
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 259
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(4214);
    ref.push(4214);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 260
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 261
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 262
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(2611);
    ref.push(2611);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 263
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 264
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 265
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 266
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 267
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 268
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(1848);
    ref.push(1848);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 269
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 270
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.push(4884);
    ref.push(4884);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 271
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 272
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 273
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 274
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(8458);
    ref.push(8458);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 275
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 276
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 277
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 278
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 279
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 280
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 281
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(7222);
    ref.push(7222);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 282
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 283
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 284
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 285
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 286
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 287
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 288
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(9618);
    ref.push(9618);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 289
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(7727);
    ref.push(7727);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 290
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(7974);
    ref.push(7974);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 291
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 292
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 293
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 294
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 295
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 296
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(5533);
    ref.push(5533);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 297
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 298
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 299
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 300
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 301
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 302
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(5736);
    ref.push(5736);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 303
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 304
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 305
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(5172);
    ref.push(5172);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 306
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 307
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(1301);
    ref.push(1301);

//len_list: 173
//==============================


//==============================
    submit.push(5616);
    ref.push(5616);

//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.push(9968);
    ref.push(9968);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 308
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 309
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 310
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.push(2732);
    ref.push(2732);

//len_list: 175
//==============================


//==============================
    submit.push(2429);
    ref.push(2429);

//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 311
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 312
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 313
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 314
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 315
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(7324);
    ref.push(7324);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 316
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(821);
    ref.push(821);

//len_list: 178
//==============================


//==============================
    submit.push(4453);
    ref.push(4453);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 317
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(5214);
    ref.push(5214);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 318
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 319
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(3303);
    ref.push(3303);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 320
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 321
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 322
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 323
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 324
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 325
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(1922);
    ref.push(1922);

//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.push(8694);
    ref.push(8694);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 326
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(707);
    ref.push(707);

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 327
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 328
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 329
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 330
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 331
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 332
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 333
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 334
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(812);
    ref.push(812);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 335
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 336
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 337
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(9008);
    ref.push(9008);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 338
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(1919);
    ref.push(1919);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 339
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(8837);
    ref.push(8837);

//len_list: 180
//==============================


//==============================
    submit.push(6062);
    ref.push(6062);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 340
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 341
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 342
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(6305);
    ref.push(6305);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 343
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 344
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 345
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(6739);
    ref.push(6739);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 346
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 347
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(3527);
    ref.push(3527);

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 348
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 349
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(9034);
    ref.push(9034);

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 350
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(9542);
    ref.push(9542);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 351
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 352
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(3872);
    ref.push(3872);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 353
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 354
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(1738);
    ref.push(1738);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 355
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(3575);
    ref.push(3575);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 356
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(6595);
    ref.push(6595);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 357
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 358
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 359
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 360
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 361
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 362
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 363
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 364
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 365
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 366
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 367
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 368
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(4);
    ref.push(4);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 369
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 370
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 371
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 372
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 373
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 374
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 375
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 376
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 377
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 378
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(682);
    ref.push(682);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 379
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 380
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 381
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 382
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 383
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 384
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 385
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 386
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 387
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 388
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(1890);
    ref.push(1890);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 389
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 390
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 391
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 392
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 393
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(5185);
    ref.push(5185);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 394
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 175
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 174
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 395
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.push(4312);
    ref.push(4312);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 396
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 397
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 398
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 399
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 400
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 401
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 402
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 403
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 404
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 405
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 406
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(2190);
    ref.push(2190);

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 407
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 408
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 409
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(2253);
    ref.push(2253);

//len_list: 172
//==============================


//==============================
    submit.push(520);
    ref.push(520);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 410
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 411
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 412
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 413
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 414
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 415
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 416
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(1751);
    ref.push(1751);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 417
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 418
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 419
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(7898);
    ref.push(7898);

//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    submit.push(2985);
    ref.push(2985);

//len_list: 173
//==============================


//==============================
    submit.push(2023);
    ref.push(2023);

//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 420
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 421
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 422
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 423
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(9175);
    ref.push(9175);

//len_list: 174
//==============================


//==============================
    submit.push(5947);
    ref.push(5947);

//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 424
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 425
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 426
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 427
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 428
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 429
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 430
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 431
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    submit.push(507);
    ref.push(507);

//len_list: 176
//==============================


//==============================
    submit.push(7914);
    ref.push(7914);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 432
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.push(6746);
    ref.push(6746);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 433
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(9314);
    ref.push(9314);

//len_list: 178
//==============================


//==============================
    submit.push(4178);
    ref.push(4178);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 434
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 435
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(7650);
    ref.push(7650);

//len_list: 180
//==============================


//==============================
    submit.push(9136);
    ref.push(9136);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 436
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 437
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 438
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 439
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    submit.push(2459);
    ref.push(2459);

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 440
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.push(2754);
    ref.push(2754);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 441
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.push(3529);
    ref.push(3529);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 442
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 443
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(4903);
    ref.push(4903);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 444
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 445
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(6556);
    ref.push(6556);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 446
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 447
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 448
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 449
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 450
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 451
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 452
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(415);
    ref.push(415);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 453
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 454
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(7016);
    ref.push(7016);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 455
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(4897);
    ref.push(4897);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 456
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 457
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 458
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 459
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 460
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 461
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 462
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(5357);
    ref.push(5357);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 463
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 464
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 465
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 466
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(8198);
    ref.push(8198);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 467
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 468
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(8642);
    ref.push(8642);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 469
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 470
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 471
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 472
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 473
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(8730);
    ref.push(8730);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 474
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(9188);
    ref.push(9188);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 475
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 476
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 477
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 478
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 479
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 480
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 481
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 482
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(5808);
    ref.push(5808);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 483
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 484
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(9833);
    ref.push(9833);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 485
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 486
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 487
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 488
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(542);
    ref.push(542);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 489
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 490
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 491
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 492
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 493
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 494
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 495
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 496
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 497
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(3878);
    ref.push(3878);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(8720);
    ref.push(8720);

//len_list: 179
//==============================


//==============================
    submit.push(6822);
    ref.push(6822);

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.push(3613);
    ref.push(3613);

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 498
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 499
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(6094);
    ref.push(6094);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 500
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 501
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 502
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 503
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(6281);
    ref.push(6281);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 504
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 505
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 506
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 507
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 508
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 509
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 510
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 511
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 512
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 513
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 514
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 515
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(7386);
    ref.push(7386);

//len_list: 179
//==============================


//==============================
    submit.push(5573);
    ref.push(5573);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 516
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(146);
    ref.push(146);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 517
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 518
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 519
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(6174);
    ref.push(6174);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 520
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 521
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 522
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(530);
    ref.push(530);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 523
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(7268);
    ref.push(7268);

//len_list: 182
//==============================


//==============================
    submit.push(6644);
    ref.push(6644);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 524
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 525
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.push(7951);
    ref.push(7951);

//len_list: 184
//==============================


//==============================
    submit.push(2228);
    ref.push(2228);

//len_list: 185
//==============================


//==============================
    submit.push(5706);
    ref.push(5706);

//len_list: 186
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 526
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 527
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.push(7842);
    ref.push(7842);

//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 528
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 529
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 530
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 531
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 532
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 533
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 534
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 535
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 536
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 537
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 538
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 539
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.push(983);
    ref.push(983);

//len_list: 184
//==============================


//==============================
    submit.push(4100);
    ref.push(4100);

//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 540
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 541
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 542
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 543
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 544
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.push(7996);
    ref.push(7996);

//len_list: 185
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 545
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 546
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 547
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    submit.push(6035);
    ref.push(6035);

//len_list: 186
//==============================


//==============================
    submit.push(8068);
    ref.push(8068);

//len_list: 187
//==============================


//==============================
    submit.push(2361);
    ref.push(2361);

//len_list: 188
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 548
    REQUIRE( ret_ref == ret_submit);
//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 549
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 186
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 550
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    submit.push(6683);
    ref.push(6683);

//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 551
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 552
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 553
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 554
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 555
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 556
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    submit.push(7248);
    ref.push(7248);

//len_list: 186
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 557
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.push(5332);
    ref.push(5332);

//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 558
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 559
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.push(7416);
    ref.push(7416);

//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    submit.push(1356);
    ref.push(1356);

//len_list: 188
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 560
    REQUIRE( ret_ref == ret_submit);
//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    submit.push(1803);
    ref.push(1803);

//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 561
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 562
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.push(6910);
    ref.push(6910);

//len_list: 188
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 563
    REQUIRE( ret_ref == ret_submit);
//len_list: 188
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 564
    REQUIRE( ret_ref == ret_submit);
//len_list: 188
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 565
    REQUIRE( ret_ref == ret_submit);
//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 566
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.push(269);
    ref.push(269);

//len_list: 188
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 187
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 567
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 568
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 569
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 570
    REQUIRE( ret_ref == ret_submit);
//len_list: 187
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 571
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 572
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 573
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 574
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    submit.push(1290);
    ref.push(1290);

//len_list: 186
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 575
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    submit.push(2759);
    ref.push(2759);

//len_list: 186
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 576
    REQUIRE( ret_ref == ret_submit);
//len_list: 186
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 185
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 577
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 578
    REQUIRE( ret_ref == ret_submit);
//len_list: 185
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 184
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 579
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 580
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 581
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 183
//==============================


//==============================
    submit.push(8232);
    ref.push(8232);

//len_list: 184
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 582
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 583
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 584
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 585
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 586
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 587
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 588
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 589
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 590
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 591
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 592
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 593
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(4263);
    ref.push(4263);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 594
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 595
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 596
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(3565);
    ref.push(3565);

//len_list: 183
//==============================


//==============================
    submit.push(1825);
    ref.push(1825);

//len_list: 184
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 597
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 598
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 599
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 600
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 601
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 602
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 603
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(2813);
    ref.push(2813);

//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 604
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 605
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 606
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 607
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 608
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 609
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 610
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 611
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(6616);
    ref.push(6616);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(9330);
    ref.push(9330);

//len_list: 179
//==============================


//==============================
    submit.push(6134);
    ref.push(6134);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 612
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 613
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(7570);
    ref.push(7570);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 614
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 615
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 616
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 617
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(8145);
    ref.push(8145);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 618
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 619
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(4648);
    ref.push(4648);

//len_list: 180
//==============================


//==============================
    submit.push(2525);
    ref.push(2525);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 620
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(8362);
    ref.push(8362);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 621
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(4401);
    ref.push(4401);

//len_list: 182
//==============================


//==============================
    submit.push(6580);
    ref.push(6580);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 622
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 623
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 624
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 625
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 626
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 627
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 628
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 629
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 630
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(9222);
    ref.push(9222);

//len_list: 182
//==============================


//==============================
    submit.push(3556);
    ref.push(3556);

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 631
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(9466);
    ref.push(9466);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 632
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 633
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 634
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 635
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 636
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(9742);
    ref.push(9742);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 637
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 638
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 639
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 640
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 641
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(8310);
    ref.push(8310);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 642
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 643
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 644
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 645
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 646
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 647
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 648
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 649
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 650
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 651
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.push(3419);
    ref.push(3419);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 652
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(9548);
    ref.push(9548);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 653
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(5211);
    ref.push(5211);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 654
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 655
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 656
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.push(2943);
    ref.push(2943);

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 657
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 658
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 659
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 660
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 661
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 662
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 663
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(7763);
    ref.push(7763);

//len_list: 181
//==============================


//==============================
    submit.push(5787);
    ref.push(5787);

//len_list: 182
//==============================


//==============================
    submit.push(1438);
    ref.push(1438);

//len_list: 183
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 664
    REQUIRE( ret_ref == ret_submit);
//len_list: 183
//==============================


//==============================
    submit.push(5552);
    ref.push(5552);

//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 665
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 666
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 667
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 668
    REQUIRE( ret_ref == ret_submit);
//len_list: 184
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 669
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 670
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 671
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 672
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 673
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 674
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    submit.push(3036);
    ref.push(3036);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 675
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 676
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 677
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 175
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 678
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 679
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 680
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 681
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 682
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 683
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(736);
    ref.push(736);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 684
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 685
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 686
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 687
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(4128);
    ref.push(4128);

//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 688
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 689
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 690
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.push(616);
    ref.push(616);

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 691
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.push(518);
    ref.push(518);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 692
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 693
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 694
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 695
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(1608);
    ref.push(1608);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 696
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 697
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(8355);
    ref.push(8355);

//len_list: 172
//==============================


//==============================
    submit.push(7412);
    ref.push(7412);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 698
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.push(2754);
    ref.push(2754);

//len_list: 174
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 699
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.push(1485);
    ref.push(1485);

//len_list: 175
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 700
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 701
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 174
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 702
    REQUIRE( ret_ref == ret_submit);
//len_list: 174
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 703
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 704
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(7570);
    ref.push(7570);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    submit.push(4828);
    ref.push(4828);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 705
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 706
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 707
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 708
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 709
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 710
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 711
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 712
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 713
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 714
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 715
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 716
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 717
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(2910);
    ref.push(2910);

//len_list: 171
//==============================


//==============================
    submit.push(5955);
    ref.push(5955);

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 718
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 719
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 720
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(4120);
    ref.push(4120);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 721
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 722
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 723
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(4184);
    ref.push(4184);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 724
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 725
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 726
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 727
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(1253);
    ref.push(1253);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 728
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 729
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(6499);
    ref.push(6499);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 730
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 731
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(2496);
    ref.push(2496);

//len_list: 169
//==============================


//==============================
    submit.push(9471);
    ref.push(9471);

//len_list: 170
//==============================


//==============================
    submit.push(326);
    ref.push(326);

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 732
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 733
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 734
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 735
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 736
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 737
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 738
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(9443);
    ref.push(9443);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 739
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 740
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(2383);
    ref.push(2383);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 741
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 742
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 743
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 744
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(1738);
    ref.push(1738);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 745
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 746
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 747
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 748
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 749
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 750
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 751
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 752
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 753
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 754
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 755
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 756
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(2376);
    ref.push(2376);

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 757
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(5861);
    ref.push(5861);

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 758
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(3851);
    ref.push(3851);

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 759
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(7844);
    ref.push(7844);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 760
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 761
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 762
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(7402);
    ref.push(7402);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 763
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 764
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 765
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 766
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(9240);
    ref.push(9240);

//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 767
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 768
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 769
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 770
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 771
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 772
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 773
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.push(4478);
    ref.push(4478);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 774
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 775
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    submit.push(7542);
    ref.push(7542);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 776
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 777
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 778
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 779
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 780
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 781
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(8694);
    ref.push(8694);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 782
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 783
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(922);
    ref.push(922);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 784
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 785
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 786
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 787
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(6303);
    ref.push(6303);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 788
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(8977);
    ref.push(8977);

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 789
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 790
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 791
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(2136);
    ref.push(2136);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 792
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 793
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 794
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 795
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 796
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 797
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 798
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(3852);
    ref.push(3852);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 799
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(2575);
    ref.push(2575);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 800
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 801
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.push(9895);
    ref.push(9895);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 802
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 803
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(3647);
    ref.push(3647);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 804
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 805
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 806
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 807
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(485);
    ref.push(485);

//len_list: 170
//==============================


//==============================
    submit.push(1710);
    ref.push(1710);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 808
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(7605);
    ref.push(7605);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 809
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 810
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(6404);
    ref.push(6404);

//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 811
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 812
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 813
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 814
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 815
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 816
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 817
    REQUIRE( ret_ref == ret_submit);
//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 818
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 819
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.push(7592);
    ref.push(7592);

//len_list: 172
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 820
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.push(4183);
    ref.push(4183);

//len_list: 173
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 172
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 821
    REQUIRE( ret_ref == ret_submit);
//len_list: 172
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 822
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 823
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(8837);
    ref.push(8837);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 824
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 825
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 826
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 827
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 828
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 829
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 830
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 831
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 832
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 833
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 834
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 835
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(1629);
    ref.push(1629);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 836
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 837
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 838
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 839
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 840
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 841
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 842
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 843
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 844
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 845
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 846
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 847
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 848
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 849
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 850
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 851
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 852
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(4788);
    ref.push(4788);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 853
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 854
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 855
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    submit.push(8186);
    ref.push(8186);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 856
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 857
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 858
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 859
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(3502);
    ref.push(3502);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 860
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 861
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 862
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(4799);
    ref.push(4799);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 863
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 864
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(47);
    ref.push(47);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 865
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 866
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 867
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 868
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(9861);
    ref.push(9861);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 869
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 870
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 871
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 872
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    submit.push(8293);
    ref.push(8293);

//len_list: 170
//==============================


//==============================
    submit.push(2721);
    ref.push(2721);

//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 873
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 874
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 875
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 876
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 877
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 878
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 879
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    submit.push(9217);
    ref.push(9217);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 880
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 881
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(4401);
    ref.push(4401);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 882
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 883
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 884
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 885
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 886
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 887
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(3769);
    ref.push(3769);

//len_list: 166
//==============================


//==============================
    submit.push(7238);
    ref.push(7238);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 888
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 889
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 890
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 891
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 892
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 893
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 894
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 895
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    submit.push(4302);
    ref.push(4302);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 896
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 897
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(9795);
    ref.push(9795);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 898
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(5775);
    ref.push(5775);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 899
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 900
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 901
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 902
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 903
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(5438);
    ref.push(5438);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 904
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 905
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 906
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    submit.push(4923);
    ref.push(4923);

//len_list: 165
//==============================


//==============================
    submit.push(3459);
    ref.push(3459);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 907
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 908
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(1459);
    ref.push(1459);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 909
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 910
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 911
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 912
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 913
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 914
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 915
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 916
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 917
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.push(6362);
    ref.push(6362);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 918
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 919
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    submit.push(5170);
    ref.push(5170);

//len_list: 165
//==============================


//==============================
    submit.push(9333);
    ref.push(9333);

//len_list: 166
//==============================


//==============================
    submit.push(9096);
    ref.push(9096);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 920
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 921
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 922
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 923
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 924
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 925
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 926
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 927
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 928
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 929
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 930
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.push(5077);
    ref.push(5077);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 931
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 932
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.push(3048);
    ref.push(3048);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 933
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 934
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(8104);
    ref.push(8104);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 935
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 936
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 937
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.push(7922);
    ref.push(7922);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 938
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 939
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 940
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 163
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 941
    REQUIRE( ret_ref == ret_submit);
//len_list: 163
//==============================


//==============================
    submit.push(3408);
    ref.push(3408);

//len_list: 164
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 942
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    submit.push(9387);
    ref.push(9387);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 943
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 944
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 945
    REQUIRE( ret_ref == ret_submit);
//len_list: 164
//==============================


//==============================
    submit.push(7546);
    ref.push(7546);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 946
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 947
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 948
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 949
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 950
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 164
//==============================


//==============================
    submit.push(9415);
    ref.push(9415);

//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 951
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 952
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 953
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 954
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(1789);
    ref.push(1789);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 955
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 956
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 957
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 958
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 959
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 960
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(4540);
    ref.push(4540);

//len_list: 167
//==============================


//==============================
    submit.push(4466);
    ref.push(4466);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 961
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 962
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 963
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 964
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(3955);
    ref.push(3955);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 965
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    submit.push(1412);
    ref.push(1412);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 966
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 967
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 968
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 969
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 970
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 971
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 972
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 973
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    submit.push(6830);
    ref.push(6830);

//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 974
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 975
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 976
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(5045);
    ref.push(5045);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 977
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 978
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 979
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 980
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(7475);
    ref.push(7475);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 981
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 982
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    submit.push(2857);
    ref.push(2857);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 983
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.push(4223);
    ref.push(4223);

//len_list: 167
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 984
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 985
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 986
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 987
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 988
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(448);
    ref.push(448);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 989
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 990
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 991
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 992
    REQUIRE( ret_ref == ret_submit);
//len_list: 165
//==============================


//==============================
    submit.push(4989);
    ref.push(4989);

//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 993
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 994
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 995
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 996
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 997
    REQUIRE( ret_ref == ret_submit);
//len_list: 166
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 165
//==============================


//==============================
    submit.push(4546);
    ref.push(4546);

//len_list: 166
//==============================


//==============================
    submit.push(8272);
    ref.push(8272);

//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 998
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 999
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1000
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1001
    REQUIRE( ret_ref == ret_submit);
//len_list: 167
//==============================


//==============================
    submit.push(3542);
    ref.push(3542);

//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1002
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1003
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1004
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1005
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1006
    REQUIRE( ret_ref == ret_submit);
//len_list: 168
//==============================


//==============================
    submit.push(5038);
    ref.push(5038);

//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1007
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1008
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1009
    REQUIRE( ret_ref == ret_submit);
//len_list: 169
//==============================


//==============================
    submit.push(2555);
    ref.push(2555);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1010
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1011
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1012
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 169
//==============================


//==============================
    submit.push(6656);
    ref.push(6656);

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1013
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1014
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1015
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1016
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1017
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1018
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1019
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(6211);
    ref.push(6211);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1020
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1021
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    submit.push(908);
    ref.push(908);

//len_list: 171
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1022
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1023
    REQUIRE( ret_ref == ret_submit);
//len_list: 171
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1024
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1025
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1026
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1027
    REQUIRE( ret_ref == ret_submit);
//len_list: 170
//==============================


//==============================
    submit.push(709);
    ref.push(709);

//len_list: 171
//==============================


//==============================
    submit.push(442);
    ref.push(442);

//len_list: 172
//==============================


//==============================
    submit.push(5134);
    ref.push(5134);

//len_list: 173
//==============================


//==============================
    submit.push(2796);
    ref.push(2796);

//len_list: 174
//==============================


//==============================
    submit.push(8348);
    ref.push(8348);

//len_list: 175
//==============================


//==============================
    submit.push(3330);
    ref.push(3330);

//len_list: 176
//==============================


//==============================
    submit.push(3538);
    ref.push(3538);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1028
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1029
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1030
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1031
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1032
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1033
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1034
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(239);
    ref.push(239);

//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1035
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1036
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1037
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1038
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(5154);
    ref.push(5154);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1039
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(5813);
    ref.push(5813);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1040
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1041
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1042
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1043
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1044
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1045
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(4241);
    ref.push(4241);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1046
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1047
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1048
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1049
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 176
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1050
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1051
    REQUIRE( ret_ref == ret_submit);
//len_list: 175
//==============================


//==============================
    submit.push(9607);
    ref.push(9607);

//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1052
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1053
    REQUIRE( ret_ref == ret_submit);
//len_list: 176
//==============================


//==============================
    submit.push(7521);
    ref.push(7521);

//len_list: 177
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1054
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(7918);
    ref.push(7918);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1055
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1056
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(735);
    ref.push(735);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1057
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1058
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1059
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(344);
    ref.push(344);

//len_list: 180
//==============================


//==============================
    submit.push(4430);
    ref.push(4430);

//len_list: 181
//==============================


//==============================
    submit.push(5920);
    ref.push(5920);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1060
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1061
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1062
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1063
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1064
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1065
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1066
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1067
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1068
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1069
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1070
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(4863);
    ref.push(4863);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1071
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(2214);
    ref.push(2214);

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1072
    REQUIRE( ret_ref == ret_submit);
//len_list: 177
//==============================


//==============================
    submit.push(8825);
    ref.push(8825);

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1073
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1074
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(8533);
    ref.push(8533);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1075
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1076
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1077
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1078
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(3354);
    ref.push(3354);

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(7928);
    ref.push(7928);

//len_list: 179
//==============================


//==============================
    submit.push(6111);
    ref.push(6111);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1079
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(3693);
    ref.push(3693);

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.push(6249);
    ref.push(6249);

//len_list: 181
//==============================


//==============================
    submit.push(2704);
    ref.push(2704);

//len_list: 182
//==============================


//==============================
    submit.push(6692);
    ref.push(6692);

//len_list: 183
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 182
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1080
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1081
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1082
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1083
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1084
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1085
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1086
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1087
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.push(974);
    ref.push(974);

//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 177
//==============================


//==============================
    submit.push(6154);
    ref.push(6154);

//len_list: 178
//==============================


//==============================
    submit.push(6106);
    ref.push(6106);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1088
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(1271);
    ref.push(1271);

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    submit.push(5237);
    ref.push(5237);

//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1089
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1090
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1091
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1092
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1093
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1094
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1095
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1096
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(4884);
    ref.push(4884);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1097
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1098
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1099
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1100
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1101
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1102
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1103
    REQUIRE( ret_ref == ret_submit);
//len_list: 179
//==============================


//==============================
    submit.push(5025);
    ref.push(5025);

//len_list: 180
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 179
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 178
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1104
    REQUIRE( ret_ref == ret_submit);
//len_list: 178
//==============================


//==============================
    submit.push(8110);
    ref.push(8110);

//len_list: 179
//==============================


//==============================
    submit.push(6521);
    ref.push(6521);

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1105
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(7907);
    ref.push(7907);

//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1106
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1107
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1108
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1109
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1110
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1111
    REQUIRE( ret_ref == ret_submit);
//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    ret_submit = submit.front();
    ret_ref = ref.front();
//num_require: 1112
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1113
    REQUIRE( ret_ref == ret_submit);
//len_list: 180
//==============================


//==============================
    submit.push(5701);
    ref.push(5701);

//len_list: 181
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 180
//==============================


//==============================
    submit.push(269);
    ref.push(269);

//len_list: 181
//==============================


//==============================
    submit.push(9388);
    ref.push(9388);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1114
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1115
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1116
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1117
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 181
//==============================


//==============================
    submit.push(3286);
    ref.push(3286);

//len_list: 182
//==============================


//==============================
    ret_submit = submit.back();
    ret_ref = ref.back();
//num_require: 1118
    REQUIRE( ret_ref == ret_submit);
//len_list: 182
//==============================


}
