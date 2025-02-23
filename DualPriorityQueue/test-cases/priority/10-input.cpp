
    #define CATCH_CONFIG_FAST_COMPILE
    #include "catch.hpp"
    #include "MyPriorityQueueImpl.h"
    #include <queue>
    #include <stdexcept>
    #include <iostream>
    using namespace std;
    TEST_CASE( "test queue with (capacity, len_cmd) = (494,1931)") {

    std::priority_queue<int> ref;
    MyPriorityQueueImpl<int,true,494> submit;
    int ret_ref;
    int ret_submit;

//==============================
    submit.push(8677);
    ref.push(8677);

//len_list: 1
//==============================


//==============================
    submit.push(3272);
    ref.push(3272);

//len_list: 2
//==============================


//==============================
    submit.push(9477);
    ref.push(9477);

//len_list: 3
//==============================


//==============================
    submit.push(3019);
    ref.push(3019);

//len_list: 4
//==============================


//==============================
    submit.push(2874);
    ref.push(2874);

//len_list: 5
//==============================


//==============================
    submit.push(4917);
    ref.push(4917);

//len_list: 6
//==============================


//==============================
    submit.push(4078);
    ref.push(4078);

//len_list: 7
//==============================


//==============================
    submit.push(777);
    ref.push(777);

//len_list: 8
//==============================


//==============================
    submit.push(9432);
    ref.push(9432);

//len_list: 9
//==============================


//==============================
    submit.push(8539);
    ref.push(8539);

//len_list: 10
//==============================


//==============================
    submit.push(7238);
    ref.push(7238);

//len_list: 11
//==============================


//==============================
    submit.push(644);
    ref.push(644);

//len_list: 12
//==============================


//==============================
    submit.push(9940);
    ref.push(9940);

//len_list: 13
//==============================


//==============================
    submit.push(303);
    ref.push(303);

//len_list: 14
//==============================


//==============================
    submit.push(6808);
    ref.push(6808);

//len_list: 15
//==============================


//==============================
    submit.push(31);
    ref.push(31);

//len_list: 16
//==============================


//==============================
    submit.push(1656);
    ref.push(1656);

//len_list: 17
//==============================


//==============================
    submit.push(7968);
    ref.push(7968);

//len_list: 18
//==============================


//==============================
    submit.push(5558);
    ref.push(5558);

//len_list: 19
//==============================


//==============================
    submit.push(5453);
    ref.push(5453);

//len_list: 20
//==============================


//==============================
    submit.push(1964);
    ref.push(1964);

//len_list: 21
//==============================


//==============================
    submit.push(4229);
    ref.push(4229);

//len_list: 22
//==============================


//==============================
    submit.push(593);
    ref.push(593);

//len_list: 23
//==============================


//==============================
    submit.push(2521);
    ref.push(2521);

//len_list: 24
//==============================


//==============================
    submit.push(2830);
    ref.push(2830);

//len_list: 25
//==============================


//==============================
    submit.push(118);
    ref.push(118);

//len_list: 26
//==============================


//==============================
    submit.push(6597);
    ref.push(6597);

//len_list: 27
//==============================


//==============================
    submit.push(5222);
    ref.push(5222);

//len_list: 28
//==============================


//==============================
    submit.push(5215);
    ref.push(5215);

//len_list: 29
//==============================


//==============================
    submit.push(1021);
    ref.push(1021);

//len_list: 30
//==============================


//==============================
    submit.push(1188);
    ref.push(1188);

//len_list: 31
//==============================


//==============================
    submit.push(2993);
    ref.push(2993);

//len_list: 32
//==============================


//==============================
    submit.push(8797);
    ref.push(8797);

//len_list: 33
//==============================


//==============================
    submit.push(1281);
    ref.push(1281);

//len_list: 34
//==============================


//==============================
    submit.push(5438);
    ref.push(5438);

//len_list: 35
//==============================


//==============================
    submit.push(6837);
    ref.push(6837);

//len_list: 36
//==============================


//==============================
    submit.push(3657);
    ref.push(3657);

//len_list: 37
//==============================


//==============================
    submit.push(3094);
    ref.push(3094);

//len_list: 38
//==============================


//==============================
    submit.push(3737);
    ref.push(3737);

//len_list: 39
//==============================


//==============================
    submit.push(97);
    ref.push(97);

//len_list: 40
//==============================


//==============================
    submit.push(706);
    ref.push(706);

//len_list: 41
//==============================


//==============================
    submit.push(6160);
    ref.push(6160);

//len_list: 42
//==============================


//==============================
    submit.push(6702);
    ref.push(6702);

//len_list: 43
//==============================


//==============================
    submit.push(6874);
    ref.push(6874);

//len_list: 44
//==============================


//==============================
    submit.push(603);
    ref.push(603);

//len_list: 45
//==============================


//==============================
    submit.push(7970);
    ref.push(7970);

//len_list: 46
//==============================


//==============================
    submit.push(5506);
    ref.push(5506);

//len_list: 47
//==============================


//==============================
    submit.push(2510);
    ref.push(2510);

//len_list: 48
//==============================


//==============================
    submit.push(3162);
    ref.push(3162);

//len_list: 49
//==============================


//==============================
    submit.push(1621);
    ref.push(1621);

//len_list: 50
//==============================


//==============================
    submit.push(9254);
    ref.push(9254);

//len_list: 51
//==============================


//==============================
    submit.push(9884);
    ref.push(9884);

//len_list: 52
//==============================


//==============================
    submit.push(4361);
    ref.push(4361);

//len_list: 53
//==============================


//==============================
    submit.push(4578);
    ref.push(4578);

//len_list: 54
//==============================


//==============================
    submit.push(4680);
    ref.push(4680);

//len_list: 55
//==============================


//==============================
    submit.push(620);
    ref.push(620);

//len_list: 56
//==============================


//==============================
    submit.push(8382);
    ref.push(8382);

//len_list: 57
//==============================


//==============================
    submit.push(7175);
    ref.push(7175);

//len_list: 58
//==============================


//==============================
    submit.push(481);
    ref.push(481);

//len_list: 59
//==============================


//==============================
    submit.push(1025);
    ref.push(1025);

//len_list: 60
//==============================


//==============================
    submit.push(9996);
    ref.push(9996);

//len_list: 61
//==============================


//==============================
    submit.push(4417);
    ref.push(4417);

//len_list: 62
//==============================


//==============================
    submit.push(8313);
    ref.push(8313);

//len_list: 63
//==============================


//==============================
    submit.push(8707);
    ref.push(8707);

//len_list: 64
//==============================


//==============================
    submit.push(8384);
    ref.push(8384);

//len_list: 65
//==============================


//==============================
    submit.push(6218);
    ref.push(6218);

//len_list: 66
//==============================


//==============================
    submit.push(1379);
    ref.push(1379);

//len_list: 67
//==============================


//==============================
    submit.push(6295);
    ref.push(6295);

//len_list: 68
//==============================


//==============================
    submit.push(8290);
    ref.push(8290);

//len_list: 69
//==============================


//==============================
    submit.push(3661);
    ref.push(3661);

//len_list: 70
//==============================


//==============================
    submit.push(2668);
    ref.push(2668);

//len_list: 71
//==============================


//==============================
    submit.push(8622);
    ref.push(8622);

//len_list: 72
//==============================


//==============================
    submit.push(8624);
    ref.push(8624);

//len_list: 73
//==============================


//==============================
    submit.push(1505);
    ref.push(1505);

//len_list: 74
//==============================


//==============================
    submit.push(9685);
    ref.push(9685);

//len_list: 75
//==============================


//==============================
    submit.push(15);
    ref.push(15);

//len_list: 76
//==============================


//==============================
    submit.push(2942);
    ref.push(2942);

//len_list: 77
//==============================


//==============================
    submit.push(8598);
    ref.push(8598);

//len_list: 78
//==============================


//==============================
    submit.push(6455);
    ref.push(6455);

//len_list: 79
//==============================


//==============================
    submit.push(1172);
    ref.push(1172);

//len_list: 80
//==============================


//==============================
    submit.push(9609);
    ref.push(9609);

//len_list: 81
//==============================


//==============================
    submit.push(5477);
    ref.push(5477);

//len_list: 82
//==============================


//==============================
    submit.push(4323);
    ref.push(4323);

//len_list: 83
//==============================


//==============================
    submit.push(9571);
    ref.push(9571);

//len_list: 84
//==============================


//==============================
    submit.push(7328);
    ref.push(7328);

//len_list: 85
//==============================


//==============================
    submit.push(5459);
    ref.push(5459);

//len_list: 86
//==============================


//==============================
    submit.push(2438);
    ref.push(2438);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(909);
    ref.push(909);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 2
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 3
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(4916);
    ref.push(4916);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 4
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 5
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 6
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(3630);
    ref.push(3630);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 7
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 8
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 9
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(4738);
    ref.push(4738);

//len_list: 86
//==============================


//==============================
    submit.push(9719);
    ref.push(9719);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 10
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 11
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(9647);
    ref.push(9647);

//len_list: 86
//==============================


//==============================
    submit.push(6062);
    ref.push(6062);

//len_list: 87
//==============================


//==============================
    submit.push(7663);
    ref.push(7663);

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 12
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 13
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 14
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(3238);
    ref.push(3238);

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 15
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 16
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(3129);
    ref.push(3129);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 17
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(4834);
    ref.push(4834);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 18
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.push(5129);
    ref.push(5129);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 19
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 20
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 21
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 22
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 23
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 24
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(1558);
    ref.push(1558);

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(1770);
    ref.push(1770);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 25
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 26
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 27
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 28
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 29
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 30
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 31
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(2350);
    ref.push(2350);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 32
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 33
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 34
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 35
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 36
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(8093);
    ref.push(8093);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 37
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 38
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 39
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(3441);
    ref.push(3441);

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 40
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(1113);
    ref.push(1113);

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.push(1200);
    ref.push(1200);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 41
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(7068);
    ref.push(7068);

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 42
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 43
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(909);
    ref.push(909);

//len_list: 87
//==============================


//==============================
    submit.push(6760);
    ref.push(6760);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 44
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 45
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 46
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 47
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 48
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 49
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 50
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(2140);
    ref.push(2140);

//len_list: 87
//==============================


//==============================
    submit.push(8389);
    ref.push(8389);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 51
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 52
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(7661);
    ref.push(7661);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 53
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(7572);
    ref.push(7572);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 54
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(3514);
    ref.push(3514);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 55
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 56
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(384);
    ref.push(384);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 57
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 58
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.push(8829);
    ref.push(8829);

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 59
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(7765);
    ref.push(7765);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 60
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 61
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 62
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 63
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 64
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 65
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 66
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 67
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(4945);
    ref.push(4945);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 68
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 69
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 70
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.push(3310);
    ref.push(3310);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 71
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 72
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 73
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(2072);
    ref.push(2072);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 74
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 75
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(1040);
    ref.push(1040);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 76
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(3519);
    ref.push(3519);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 77
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.push(2300);
    ref.push(2300);

//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 78
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(9193);
    ref.push(9193);

//len_list: 94
//==============================


//==============================
    submit.push(6793);
    ref.push(6793);

//len_list: 95
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 79
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 80
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 81
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 82
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 83
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(8959);
    ref.push(8959);

//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 84
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 85
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(9543);
    ref.push(9543);

//len_list: 94
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 86
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    submit.push(6502);
    ref.push(6502);

//len_list: 95
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 87
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 94
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 88
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 89
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    submit.push(2316);
    ref.push(2316);

//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 90
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 91
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 92
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 93
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(8613);
    ref.push(8613);

//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 94
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 95
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 96
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 97
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 98
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 99
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 100
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 101
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 102
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 103
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 104
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(1902);
    ref.push(1902);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 105
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 106
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(2797);
    ref.push(2797);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 107
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 108
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(1475);
    ref.push(1475);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 109
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 110
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 111
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 112
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 113
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 114
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 115
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(1573);
    ref.push(1573);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 116
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 117
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 118
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(3320);
    ref.push(3320);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 119
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(6249);
    ref.push(6249);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 120
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(9893);
    ref.push(9893);

//len_list: 91
//==============================


//==============================
    submit.push(7818);
    ref.push(7818);

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.push(7163);
    ref.push(7163);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 121
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 122
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 123
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 124
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 125
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 126
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 127
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(1722);
    ref.push(1722);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 128
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 129
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 130
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 131
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 132
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 133
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 134
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(7716);
    ref.push(7716);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 135
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 136
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 137
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.push(2443);
    ref.push(2443);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 138
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 139
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 140
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(2184);
    ref.push(2184);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 141
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 142
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 143
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 144
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 145
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.push(3178);
    ref.push(3178);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 146
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.push(7420);
    ref.push(7420);

//len_list: 87
//==============================


//==============================
    submit.push(53);
    ref.push(53);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 147
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 148
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 149
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 150
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(8535);
    ref.push(8535);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 151
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(9869);
    ref.push(9869);

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 152
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 153
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 154
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(2707);
    ref.push(2707);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 155
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(9341);
    ref.push(9341);

//len_list: 87
//==============================


//==============================
    submit.push(229);
    ref.push(229);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 156
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 157
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(664);
    ref.push(664);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 158
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(8196);
    ref.push(8196);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 159
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 160
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(1322);
    ref.push(1322);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 161
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(5532);
    ref.push(5532);

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 162
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(9164);
    ref.push(9164);

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 163
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 164
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 165
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 166
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 167
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.push(9486);
    ref.push(9486);

//len_list: 89
//==============================


//==============================
    submit.push(6754);
    ref.push(6754);

//len_list: 90
//==============================


//==============================
    submit.push(8495);
    ref.push(8495);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 168
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(2228);
    ref.push(2228);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 169
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.push(2135);
    ref.push(2135);

//len_list: 93
//==============================


//==============================
    submit.push(1758);
    ref.push(1758);

//len_list: 94
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 170
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 171
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 172
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 173
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 174
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 92
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 175
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 176
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.push(2742);
    ref.push(2742);

//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 177
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 178
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 179
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 180
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 181
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.push(8205);
    ref.push(8205);

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 182
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 183
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 184
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 185
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 186
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 187
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 188
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 189
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 190
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(8104);
    ref.push(8104);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 191
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 192
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(1445);
    ref.push(1445);

//len_list: 87
//==============================


//==============================
    submit.push(5048);
    ref.push(5048);

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(8214);
    ref.push(8214);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 193
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 194
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 195
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(2704);
    ref.push(2704);

//len_list: 89
//==============================


//==============================
    submit.push(5256);
    ref.push(5256);

//len_list: 90
//==============================


//==============================
    submit.push(4927);
    ref.push(4927);

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 196
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 197
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 198
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 199
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(6140);
    ref.push(6140);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 200
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 201
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 202
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(4379);
    ref.push(4379);

//len_list: 90
//==============================


//==============================
    submit.push(442);
    ref.push(442);

//len_list: 91
//==============================


//==============================
    submit.push(3889);
    ref.push(3889);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 203
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.push(285);
    ref.push(285);

//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 204
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 205
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 206
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 207
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 208
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 209
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 210
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(4431);
    ref.push(4431);

//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 211
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 212
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 213
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(6294);
    ref.push(6294);

//len_list: 94
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 214
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 215
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 216
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 217
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 218
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 219
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 220
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 221
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 222
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 223
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 224
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 225
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 226
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 227
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 228
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 229
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 230
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 231
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(5885);
    ref.push(5885);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 232
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 233
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.push(9711);
    ref.push(9711);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 234
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 235
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.push(3425);
    ref.push(3425);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 236
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 237
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 238
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 239
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 240
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 241
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(7107);
    ref.push(7107);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 242
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 243
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(4739);
    ref.push(4739);

//len_list: 87
//==============================


//==============================
    submit.push(4583);
    ref.push(4583);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 244
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 245
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 246
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 247
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(7685);
    ref.push(7685);

//len_list: 86
//==============================


//==============================
    submit.push(2037);
    ref.push(2037);

//len_list: 87
//==============================


//==============================
    submit.push(1681);
    ref.push(1681);

//len_list: 88
//==============================


//==============================
    submit.push(971);
    ref.push(971);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 248
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.push(3255);
    ref.push(3255);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 249
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 250
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 251
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(1749);
    ref.push(1749);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 252
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 253
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.push(2509);
    ref.push(2509);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 254
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 255
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 256
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 257
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 258
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(2444);
    ref.push(2444);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 259
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 260
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(9545);
    ref.push(9545);

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 261
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 262
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 263
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(53);
    ref.push(53);

//len_list: 92
//==============================


//==============================
    submit.push(8529);
    ref.push(8529);

//len_list: 93
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.push(3245);
    ref.push(3245);

//len_list: 92
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 264
    REQUIRE( ret_ref == ret_submit);
//len_list: 92
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 265
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 266
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 267
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 268
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 269
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 270
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 271
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 272
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 273
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 274
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 275
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 276
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 277
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 278
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 279
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 280
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(1292);
    ref.push(1292);

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(3769);
    ref.push(3769);

//len_list: 86
//==============================


//==============================
    submit.push(7318);
    ref.push(7318);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 281
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 282
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(1662);
    ref.push(1662);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 283
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 284
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 285
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 286
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 287
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 288
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 289
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 290
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(5235);
    ref.push(5235);

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(9721);
    ref.push(9721);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 291
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 292
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 293
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 294
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 295
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(7393);
    ref.push(7393);

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 296
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 297
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 298
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(2920);
    ref.push(2920);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 299
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 300
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 301
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 302
    REQUIRE( ret_ref == ret_submit);
//len_list: 87
//==============================


//==============================
    submit.push(6639);
    ref.push(6639);

//len_list: 88
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 303
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(981);
    ref.push(981);

//len_list: 88
//==============================


//==============================
    submit.push(1001);
    ref.push(1001);

//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.push(5261);
    ref.push(5261);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 304
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 305
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 306
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 307
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(2989);
    ref.push(2989);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 308
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 309
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 310
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(7164);
    ref.push(7164);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 311
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 312
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 313
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.push(6232);
    ref.push(6232);

//len_list: 88
//==============================


//==============================
    submit.push(7100);
    ref.push(7100);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 314
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 315
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 316
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 317
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 318
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 319
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 320
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 321
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 322
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 323
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 324
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 325
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 326
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 87
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(4910);
    ref.push(4910);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 327
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 328
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 329
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 330
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 331
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 332
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 333
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 334
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 335
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 336
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 337
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 338
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 339
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 340
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(4703);
    ref.push(4703);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 341
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 342
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(3095);
    ref.push(3095);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 343
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 344
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 345
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 346
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 85
//==============================


//==============================
    submit.push(2436);
    ref.push(2436);

//len_list: 86
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 347
    REQUIRE( ret_ref == ret_submit);
//len_list: 86
//==============================


//==============================
    submit.push(277);
    ref.push(277);

//len_list: 87
//==============================


//==============================
    submit.push(6631);
    ref.push(6631);

//len_list: 88
//==============================


//==============================
    submit.push(9271);
    ref.push(9271);

//len_list: 89
//==============================


//==============================
    submit.push(6066);
    ref.push(6066);

//len_list: 90
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 348
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 349
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 350
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 351
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 352
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 353
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 354
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 88
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 355
    REQUIRE( ret_ref == ret_submit);
//len_list: 88
//==============================


//==============================
    submit.push(4277);
    ref.push(4277);

//len_list: 89
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 356
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 357
    REQUIRE( ret_ref == ret_submit);
//len_list: 89
//==============================


//==============================
    submit.push(6742);
    ref.push(6742);

//len_list: 90
//==============================


//==============================
    submit.push(3315);
    ref.push(3315);

//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 358
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 89
//==============================


//==============================
    submit.push(542);
    ref.push(542);

//len_list: 90
//==============================


//==============================
    submit.push(7240);
    ref.push(7240);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 359
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 360
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 361
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 90
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 362
    REQUIRE( ret_ref == ret_submit);
//len_list: 90
//==============================


//==============================
    submit.push(6589);
    ref.push(6589);

//len_list: 91
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 363
    REQUIRE( ret_ref == ret_submit);
//len_list: 91
//==============================


//==============================
    submit.push(8328);
    ref.push(8328);

//len_list: 92
//==============================


//==============================
    submit.push(5234);
    ref.push(5234);

//len_list: 93
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 364
    REQUIRE( ret_ref == ret_submit);
//len_list: 93
//==============================


//==============================
    submit.push(7004);
    ref.push(7004);

//len_list: 94
//==============================


//==============================
    submit.push(6514);
    ref.push(6514);

//len_list: 95
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 365
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 94
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 366
    REQUIRE( ret_ref == ret_submit);
//len_list: 94
//==============================


//==============================
    submit.push(9692);
    ref.push(9692);

//len_list: 95
//==============================


//==============================
    submit.push(6932);
    ref.push(6932);

//len_list: 96
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 367
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 368
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 369
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 370
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 371
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 372
    REQUIRE( ret_ref == ret_submit);
//len_list: 96
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 95
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 373
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 374
    REQUIRE( ret_ref == ret_submit);
//len_list: 95
//==============================


//==============================
    submit.push(4453);
    ref.push(4453);

//len_list: 96
//==============================


//==============================
    submit.push(3551);
    ref.push(3551);

//len_list: 97
//==============================


//==============================
    submit.push(5785);
    ref.push(5785);

//len_list: 98
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 375
    REQUIRE( ret_ref == ret_submit);
//len_list: 98
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 376
    REQUIRE( ret_ref == ret_submit);
//len_list: 98
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 377
    REQUIRE( ret_ref == ret_submit);
//len_list: 98
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 97
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 378
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 379
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 380
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 381
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 382
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 383
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 384
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 385
    REQUIRE( ret_ref == ret_submit);
//len_list: 97
//==============================


//==============================
    submit.push(200);
    ref.push(200);

//len_list: 98
//==============================


//==============================
    submit.push(2252);
    ref.push(2252);

//len_list: 99
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 386
    REQUIRE( ret_ref == ret_submit);
//len_list: 99
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 387
    REQUIRE( ret_ref == ret_submit);
//len_list: 99
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 388
    REQUIRE( ret_ref == ret_submit);
//len_list: 99
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 389
    REQUIRE( ret_ref == ret_submit);
//len_list: 99
//==============================


//==============================
    submit.push(9828);
    ref.push(9828);

//len_list: 100
//==============================


//==============================
    submit.push(2737);
    ref.push(2737);

//len_list: 101
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 390
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 391
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    submit.push(5518);
    ref.push(5518);

//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 392
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 393
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 394
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 395
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 101
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 396
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    submit.push(8857);
    ref.push(8857);

//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 397
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 398
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 399
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 400
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 401
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 402
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 101
//==============================


//==============================
    submit.push(680);
    ref.push(680);

//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 403
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 101
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 404
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 405
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 406
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 407
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    submit.push(3122);
    ref.push(3122);

//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 408
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 409
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.push(9523);
    ref.push(9523);

//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 410
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    submit.push(5507);
    ref.push(5507);

//len_list: 104
//==============================


//==============================
    submit.push(8211);
    ref.push(8211);

//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 411
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 412
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 413
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 414
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 104
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 415
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 416
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 417
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 418
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 419
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 102
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 101
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 420
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 421
    REQUIRE( ret_ref == ret_submit);
//len_list: 101
//==============================


//==============================
    submit.push(1066);
    ref.push(1066);

//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 422
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 423
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 424
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 425
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.push(8936);
    ref.push(8936);

//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 426
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 427
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 428
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 429
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 430
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.push(8237);
    ref.push(8237);

//len_list: 103
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 431
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 432
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 433
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 434
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 102
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 435
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 436
    REQUIRE( ret_ref == ret_submit);
//len_list: 102
//==============================


//==============================
    submit.push(5512);
    ref.push(5512);

//len_list: 103
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 437
    REQUIRE( ret_ref == ret_submit);
//len_list: 103
//==============================


//==============================
    submit.push(4868);
    ref.push(4868);

//len_list: 104
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 438
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 439
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 103
//==============================


//==============================
    submit.push(6961);
    ref.push(6961);

//len_list: 104
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 440
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 441
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    submit.push(8332);
    ref.push(8332);

//len_list: 105
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 104
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 442
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 443
    REQUIRE( ret_ref == ret_submit);
//len_list: 104
//==============================


//==============================
    submit.push(6168);
    ref.push(6168);

//len_list: 105
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 444
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 445
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 446
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 447
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    submit.push(4618);
    ref.push(4618);

//len_list: 106
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 448
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.push(1598);
    ref.push(1598);

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    submit.push(8257);
    ref.push(8257);

//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 449
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 450
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 451
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 452
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 453
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.push(154);
    ref.push(154);

//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 454
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 107
//==============================


//==============================
    submit.push(2236);
    ref.push(2236);

//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 455
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.push(7654);
    ref.push(7654);

//len_list: 109
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 108
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 456
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 457
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 458
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 105
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 459
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 460
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    submit.push(2400);
    ref.push(2400);

//len_list: 106
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 461
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.push(3837);
    ref.push(3837);

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    submit.push(2185);
    ref.push(2185);

//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 462
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 463
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 464
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 105
//==============================


//==============================
    submit.push(5729);
    ref.push(5729);

//len_list: 106
//==============================


//==============================
    submit.push(5243);
    ref.push(5243);

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 465
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 466
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 467
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.push(5846);
    ref.push(5846);

//len_list: 107
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 468
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 469
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 470
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 471
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 472
    REQUIRE( ret_ref == ret_submit);
//len_list: 105
//==============================


//==============================
    submit.push(1743);
    ref.push(1743);

//len_list: 106
//==============================


//==============================
    submit.push(446);
    ref.push(446);

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    submit.push(928);
    ref.push(928);

//len_list: 107
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 473
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.push(2181);
    ref.push(2181);

//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 474
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 475
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.push(5176);
    ref.push(5176);

//len_list: 109
//==============================


//==============================
    submit.push(6626);
    ref.push(6626);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 476
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 477
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 478
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 479
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(5037);
    ref.push(5037);

//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 480
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(1804);
    ref.push(1804);

//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 481
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 482
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 483
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 484
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 485
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 109
//==============================


//==============================
    submit.push(6590);
    ref.push(6590);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 486
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(283);
    ref.push(283);

//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    submit.push(5771);
    ref.push(5771);

//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 487
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 488
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 489
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 490
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 491
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 492
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(2066);
    ref.push(2066);

//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 493
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 494
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 495
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 496
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 497
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.push(2405);
    ref.push(2405);

//len_list: 112
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 111
//==============================


//==============================
    submit.push(1931);
    ref.push(1931);

//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 498
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 111
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 499
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.push(9210);
    ref.push(9210);

//len_list: 112
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 500
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 501
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 502
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 503
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 504
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 505
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 506
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 111
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 507
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 508
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 509
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 109
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 108
//==============================


//==============================
    submit.push(7105);
    ref.push(7105);

//len_list: 109
//==============================


//==============================
    submit.push(2779);
    ref.push(2779);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 510
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 109
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 511
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 512
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 513
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.push(3973);
    ref.push(3973);

//len_list: 109
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 108
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 514
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 515
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.push(746);
    ref.push(746);

//len_list: 109
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 516
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 517
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    submit.push(6938);
    ref.push(6938);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 518
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 519
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 109
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 520
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 521
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 522
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 523
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 524
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 525
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 526
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 527
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 528
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 529
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    submit.push(1280);
    ref.push(1280);

//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 530
    REQUIRE( ret_ref == ret_submit);
//len_list: 106
//==============================


//==============================
    submit.push(8276);
    ref.push(8276);

//len_list: 107
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 531
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 532
    REQUIRE( ret_ref == ret_submit);
//len_list: 107
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 106
//==============================


//==============================
    submit.push(8669);
    ref.push(8669);

//len_list: 107
//==============================


//==============================
    submit.push(9806);
    ref.push(9806);

//len_list: 108
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 533
    REQUIRE( ret_ref == ret_submit);
//len_list: 108
//==============================


//==============================
    submit.push(7602);
    ref.push(7602);

//len_list: 109
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 534
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 535
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 536
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    submit.push(1126);
    ref.push(1126);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 537
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 109
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 538
    REQUIRE( ret_ref == ret_submit);
//len_list: 109
//==============================


//==============================
    submit.push(6401);
    ref.push(6401);

//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 539
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(8832);
    ref.push(8832);

//len_list: 111
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 540
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 541
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    submit.push(6446);
    ref.push(6446);

//len_list: 111
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 110
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 542
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 543
    REQUIRE( ret_ref == ret_submit);
//len_list: 110
//==============================


//==============================
    submit.push(660);
    ref.push(660);

//len_list: 111
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 544
    REQUIRE( ret_ref == ret_submit);
//len_list: 111
//==============================


//==============================
    submit.push(9494);
    ref.push(9494);

//len_list: 112
//==============================


//==============================
    submit.push(4525);
    ref.push(4525);

//len_list: 113
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 545
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 546
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    submit.push(5349);
    ref.push(5349);

//len_list: 114
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 547
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 113
//==============================


//==============================
    submit.push(6119);
    ref.push(6119);

//len_list: 114
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 548
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 113
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 549
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 550
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 551
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 552
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 553
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 112
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 554
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 555
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 556
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 111
//==============================


//==============================
    submit.push(4116);
    ref.push(4116);

//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 557
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 558
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    submit.push(7760);
    ref.push(7760);

//len_list: 113
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 559
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 560
    REQUIRE( ret_ref == ret_submit);
//len_list: 113
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 112
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 561
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 562
    REQUIRE( ret_ref == ret_submit);
//len_list: 112
//==============================


//==============================
    submit.push(2563);
    ref.push(2563);

//len_list: 113
//==============================


//==============================
    submit.push(2183);
    ref.push(2183);

//len_list: 114
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 563
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 564
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 565
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 566
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 567
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 568
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    submit.push(5705);
    ref.push(5705);

//len_list: 115
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 569
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 570
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    submit.push(1862);
    ref.push(1862);

//len_list: 115
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 571
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 572
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 573
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    submit.push(9422);
    ref.push(9422);

//len_list: 116
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 574
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 115
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 575
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 576
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 577
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 578
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 579
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 580
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 581
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 582
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 583
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 584
    REQUIRE( ret_ref == ret_submit);
//len_list: 114
//==============================


//==============================
    submit.push(2209);
    ref.push(2209);

//len_list: 115
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 585
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 586
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 587
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 588
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 589
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 590
    REQUIRE( ret_ref == ret_submit);
//len_list: 115
//==============================


//==============================
    submit.push(7937);
    ref.push(7937);

//len_list: 116
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 591
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    submit.push(7622);
    ref.push(7622);

//len_list: 117
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 116
//==============================


//==============================
    submit.push(7680);
    ref.push(7680);

//len_list: 117
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 592
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 593
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 594
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    submit.push(7741);
    ref.push(7741);

//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 595
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 596
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 597
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 598
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 599
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 600
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(1356);
    ref.push(1356);

//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 601
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 602
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 603
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(7801);
    ref.push(7801);

//len_list: 119
//==============================


//==============================
    submit.push(5923);
    ref.push(5923);

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 604
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(7344);
    ref.push(7344);

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 605
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(4213);
    ref.push(4213);

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 606
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    submit.push(2821);
    ref.push(2821);

//len_list: 120
//==============================


//==============================
    submit.push(7682);
    ref.push(7682);

//len_list: 121
//==============================


//==============================
    submit.push(8799);
    ref.push(8799);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 607
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(6951);
    ref.push(6951);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 608
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 609
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 610
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 611
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(1712);
    ref.push(1712);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 612
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 613
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(8373);
    ref.push(8373);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 614
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.push(987);
    ref.push(987);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 615
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 616
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 617
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 618
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 619
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 620
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 621
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 622
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 623
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 624
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(5612);
    ref.push(5612);

//len_list: 123
//==============================


//==============================
    submit.push(3333);
    ref.push(3333);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 625
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 626
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(986);
    ref.push(986);

//len_list: 125
//==============================


//==============================
    submit.push(3364);
    ref.push(3364);

//len_list: 126
//==============================


//==============================
    submit.push(9741);
    ref.push(9741);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 627
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 628
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 629
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 630
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 631
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 632
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(1565);
    ref.push(1565);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 633
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    submit.push(4996);
    ref.push(4996);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 634
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(1277);
    ref.push(1277);

//len_list: 128
//==============================


//==============================
    submit.push(7887);
    ref.push(7887);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 635
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 636
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 637
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(9936);
    ref.push(9936);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 638
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 639
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 640
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.push(8740);
    ref.push(8740);

//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 641
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.push(5200);
    ref.push(5200);

//len_list: 129
//==============================


//==============================
    submit.push(2543);
    ref.push(2543);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 642
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 643
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 644
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 645
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 646
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(8);
    ref.push(8);

//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    submit.push(7229);
    ref.push(7229);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 647
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 648
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 649
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 650
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 651
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 652
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 653
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 654
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 655
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 656
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 657
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 658
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 659
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 660
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 661
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 662
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 663
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 664
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 665
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.push(7737);
    ref.push(7737);

//len_list: 122
//==============================


//==============================
    submit.push(8734);
    ref.push(8734);

//len_list: 123
//==============================


//==============================
    submit.push(5187);
    ref.push(5187);

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 666
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 667
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 668
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 669
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 670
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 671
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 672
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 673
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(7347);
    ref.push(7347);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 674
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 675
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 676
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(7274);
    ref.push(7274);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 677
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 678
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 679
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 680
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 681
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(3259);
    ref.push(3259);

//len_list: 122
//==============================


//==============================
    submit.push(245);
    ref.push(245);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 682
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(316);
    ref.push(316);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 683
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 684
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 685
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 686
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 687
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(3744);
    ref.push(3744);

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 688
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 689
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 690
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 691
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 692
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 693
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 694
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 695
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 696
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 697
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 698
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 699
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 700
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    submit.push(1933);
    ref.push(1933);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 701
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 702
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(3306);
    ref.push(3306);

//len_list: 124
//==============================


//==============================
    submit.push(2046);
    ref.push(2046);

//len_list: 125
//==============================


//==============================
    submit.push(9426);
    ref.push(9426);

//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 703
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 704
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 705
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(6721);
    ref.push(6721);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 706
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 707
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 708
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 709
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(5052);
    ref.push(5052);

//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 710
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.push(4881);
    ref.push(4881);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 711
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 712
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 713
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 714
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 715
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 716
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 717
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 718
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(5892);
    ref.push(5892);

//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 719
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 720
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 721
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 722
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 723
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(9276);
    ref.push(9276);

//len_list: 128
//==============================


//==============================
    submit.push(8872);
    ref.push(8872);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 724
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 725
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 726
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.push(5364);
    ref.push(5364);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 727
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(9982);
    ref.push(9982);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 728
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 729
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 730
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 731
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(2710);
    ref.push(2710);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 732
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 733
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.push(5185);
    ref.push(5185);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 734
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 735
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.push(1489);
    ref.push(1489);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 736
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 737
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 738
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 739
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 740
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(1983);
    ref.push(1983);

//len_list: 130
//==============================


//==============================
    submit.push(8708);
    ref.push(8708);

//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 741
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 742
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 743
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 744
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 745
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 746
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(378);
    ref.push(378);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 747
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.push(2269);
    ref.push(2269);

//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 748
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 749
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.push(559);
    ref.push(559);

//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 750
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    submit.push(5254);
    ref.push(5254);

//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 751
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.push(7089);
    ref.push(7089);

//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 752
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 753
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 754
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 755
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.push(6258);
    ref.push(6258);

//len_list: 133
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 756
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 757
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 758
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 759
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    submit.push(4718);
    ref.push(4718);

//len_list: 133
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 760
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    submit.push(6142);
    ref.push(6142);

//len_list: 133
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 761
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 762
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 763
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 764
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.push(2444);
    ref.push(2444);

//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 765
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.push(8075);
    ref.push(8075);

//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 766
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 767
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 768
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 769
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.push(5472);
    ref.push(5472);

//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 770
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.push(4617);
    ref.push(4617);

//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 771
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 772
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 773
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 774
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 775
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 776
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 777
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 778
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 779
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.push(4342);
    ref.push(4342);

//len_list: 133
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 780
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 781
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    submit.push(5942);
    ref.push(5942);

//len_list: 134
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 133
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 782
    REQUIRE( ret_ref == ret_submit);
//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    submit.push(6129);
    ref.push(6129);

//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 783
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 784
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 785
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 786
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    submit.push(1387);
    ref.push(1387);

//len_list: 131
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 787
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 788
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.push(7811);
    ref.push(7811);

//len_list: 132
//==============================


//==============================
    submit.push(3407);
    ref.push(3407);

//len_list: 133
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 132
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 789
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 790
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 791
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 792
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 793
    REQUIRE( ret_ref == ret_submit);
//len_list: 132
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 131
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 794
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 795
    REQUIRE( ret_ref == ret_submit);
//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 796
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 797
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 798
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.push(7997);
    ref.push(7997);

//len_list: 131
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 799
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 800
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 801
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 802
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 803
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 804
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 805
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 806
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 807
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 808
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 809
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 810
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 811
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(2880);
    ref.push(2880);

//len_list: 128
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 812
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 813
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 814
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 815
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(5737);
    ref.push(5737);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 816
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 817
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 818
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 819
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(5224);
    ref.push(5224);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 820
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 821
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 822
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 823
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 824
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 825
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 826
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(5868);
    ref.push(5868);

//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    submit.push(3587);
    ref.push(3587);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 827
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 828
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    submit.push(1241);
    ref.push(1241);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 829
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 830
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 831
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 832
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 833
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.push(6263);
    ref.push(6263);

//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 834
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 835
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.push(1257);
    ref.push(1257);

//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 836
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 837
    REQUIRE( ret_ref == ret_submit);
//len_list: 129
//==============================


//==============================
    submit.push(4151);
    ref.push(4151);

//len_list: 130
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 838
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 839
    REQUIRE( ret_ref == ret_submit);
//len_list: 130
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 129
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 840
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 841
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 842
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 843
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(2837);
    ref.push(2837);

//len_list: 127
//==============================


//==============================
    submit.push(1868);
    ref.push(1868);

//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 844
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 845
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 846
    REQUIRE( ret_ref == ret_submit);
//len_list: 128
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 847
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 848
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 849
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.push(3639);
    ref.push(3639);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 850
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 851
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 852
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 853
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 854
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 855
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 856
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 857
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 858
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 859
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 860
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 861
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(8890);
    ref.push(8890);

//len_list: 126
//==============================


//==============================
    submit.push(9966);
    ref.push(9966);

//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 862
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 863
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 864
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 865
    REQUIRE( ret_ref == ret_submit);
//len_list: 127
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 866
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 867
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(9081);
    ref.push(9081);

//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 868
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(1780);
    ref.push(1780);

//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 869
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 870
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 871
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 872
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 873
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 874
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 875
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(3696);
    ref.push(3696);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 876
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 877
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 878
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.push(2852);
    ref.push(2852);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 879
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 880
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 881
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 882
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 883
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(7986);
    ref.push(7986);

//len_list: 123
//==============================


//==============================
    submit.push(1385);
    ref.push(1385);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 884
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(1864);
    ref.push(1864);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 885
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 886
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 887
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 888
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 889
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 890
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 891
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 892
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 893
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 894
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 895
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(2213);
    ref.push(2213);

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 896
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 897
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 898
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 899
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 900
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 901
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 902
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 903
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 904
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 905
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 906
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 907
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(4033);
    ref.push(4033);

//len_list: 119
//==============================


//==============================
    submit.push(4809);
    ref.push(4809);

//len_list: 120
//==============================


//==============================
    submit.push(5305);
    ref.push(5305);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 908
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 909
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(1700);
    ref.push(1700);

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 910
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 117
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 911
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 116
//==============================


//==============================
    submit.push(7927);
    ref.push(7927);

//len_list: 117
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 912
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 913
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    submit.push(2124);
    ref.push(2124);

//len_list: 118
//==============================


//==============================
    submit.push(2602);
    ref.push(2602);

//len_list: 119
//==============================


//==============================
    submit.push(5024);
    ref.push(5024);

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 914
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 915
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 916
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    submit.push(6933);
    ref.push(6933);

//len_list: 119
//==============================


//==============================
    submit.push(1126);
    ref.push(1126);

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 917
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(6594);
    ref.push(6594);

//len_list: 121
//==============================


//==============================
    submit.push(2826);
    ref.push(2826);

//len_list: 122
//==============================


//==============================
    submit.push(7085);
    ref.push(7085);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 918
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 919
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 920
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 921
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 922
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(3040);
    ref.push(3040);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 923
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 924
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(7922);
    ref.push(7922);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 925
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 926
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 927
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 928
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 929
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 930
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(546);
    ref.push(546);

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 931
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 932
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 933
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 934
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 935
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 936
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 937
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(6924);
    ref.push(6924);

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 938
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(9586);
    ref.push(9586);

//len_list: 121
//==============================


//==============================
    submit.push(8393);
    ref.push(8393);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 939
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 940
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    submit.push(4319);
    ref.push(4319);

//len_list: 119
//==============================


//==============================
    submit.push(6897);
    ref.push(6897);

//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 941
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(9114);
    ref.push(9114);

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 942
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 943
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(2185);
    ref.push(2185);

//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 944
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(5560);
    ref.push(5560);

//len_list: 120
//==============================


//==============================
    submit.push(2535);
    ref.push(2535);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 945
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 946
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 947
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 948
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 949
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(5219);
    ref.push(5219);

//len_list: 121
//==============================


//==============================
    submit.push(2008);
    ref.push(2008);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 950
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 951
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(6257);
    ref.push(6257);

//len_list: 123
//==============================


//==============================
    submit.push(7597);
    ref.push(7597);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 952
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 953
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 954
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 955
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(1145);
    ref.push(1145);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 956
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 957
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(9174);
    ref.push(9174);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 958
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(7910);
    ref.push(7910);

//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 959
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 960
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(8684);
    ref.push(8684);

//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 961
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 962
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    submit.push(6788);
    ref.push(6788);

//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 963
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 964
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 965
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 966
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 967
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 968
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 969
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 970
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(8051);
    ref.push(8051);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 971
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(1015);
    ref.push(1015);

//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 972
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 973
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 974
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 975
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 976
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 977
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 978
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 979
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 980
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(2352);
    ref.push(2352);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 981
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 982
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(2381);
    ref.push(2381);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 983
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 984
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 985
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 986
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 987
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 988
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 989
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 990
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 991
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 992
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 993
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 994
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 995
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 996
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.push(3214);
    ref.push(3214);

//len_list: 126
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 997
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 998
    REQUIRE( ret_ref == ret_submit);
//len_list: 126
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 999
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1000
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1001
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1002
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1003
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1004
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1005
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1006
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1007
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1008
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1009
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1010
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1011
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1012
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1013
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(287);
    ref.push(287);

//len_list: 120
//==============================


//==============================
    submit.push(5099);
    ref.push(5099);

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1014
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1015
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1016
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1017
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1018
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(1098);
    ref.push(1098);

//len_list: 120
//==============================


//==============================
    submit.push(9127);
    ref.push(9127);

//len_list: 121
//==============================


//==============================
    submit.push(875);
    ref.push(875);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1019
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1020
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1021
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(6932);
    ref.push(6932);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1022
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1023
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(316);
    ref.push(316);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1024
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1025
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.push(581);
    ref.push(581);

//len_list: 123
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1026
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1027
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1028
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(2945);
    ref.push(2945);

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1029
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1030
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1031
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1032
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1033
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1034
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1035
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1036
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1037
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1038
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1039
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1040
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1041
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.push(6337);
    ref.push(6337);

//len_list: 121
//==============================


//==============================
    submit.push(8908);
    ref.push(8908);

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1042
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(1443);
    ref.push(1443);

//len_list: 122
//==============================


//==============================
    submit.push(7622);
    ref.push(7622);

//len_list: 123
//==============================


//==============================
    submit.push(2374);
    ref.push(2374);

//len_list: 124
//==============================


//==============================
    submit.push(1674);
    ref.push(1674);

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1043
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1044
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1045
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1046
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1047
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1048
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1049
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1050
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1051
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1052
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1053
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.push(7398);
    ref.push(7398);

//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1054
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1055
    REQUIRE( ret_ref == ret_submit);
//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1056
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1057
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(9883);
    ref.push(9883);

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    submit.push(2156);
    ref.push(2156);

//len_list: 124
//==============================


//==============================
    submit.push(1271);
    ref.push(1271);

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.push(7049);
    ref.push(7049);

//len_list: 125
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1058
    REQUIRE( ret_ref == ret_submit);
//len_list: 123
//==============================


//==============================
    submit.push(1511);
    ref.push(1511);

//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1059
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1060
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1061
    REQUIRE( ret_ref == ret_submit);
//len_list: 124
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1062
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    submit.push(4042);
    ref.push(4042);

//len_list: 120
//==============================


//==============================
    submit.push(900);
    ref.push(900);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1063
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1064
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1065
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 118
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 117
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 116
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1066
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1067
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1068
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1069
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 115
//==============================


//==============================
    submit.push(107);
    ref.push(107);

//len_list: 116
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1070
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1071
    REQUIRE( ret_ref == ret_submit);
//len_list: 116
//==============================


//==============================
    submit.push(3845);
    ref.push(3845);

//len_list: 117
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1072
    REQUIRE( ret_ref == ret_submit);
//len_list: 117
//==============================


//==============================
    submit.push(7150);
    ref.push(7150);

//len_list: 118
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1073
    REQUIRE( ret_ref == ret_submit);
//len_list: 118
//==============================


//==============================
    submit.push(4271);
    ref.push(4271);

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1074
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(4410);
    ref.push(4410);

//len_list: 120
//==============================


//==============================
    submit.push(5961);
    ref.push(5961);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1075
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.push(4319);
    ref.push(4319);

//len_list: 122
//==============================


//==============================
    submit.push(5538);
    ref.push(5538);

//len_list: 123
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 122
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1076
    REQUIRE( ret_ref == ret_submit);
//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1077
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1078
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1079
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 119
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1080
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1081
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1082
    REQUIRE( ret_ref == ret_submit);
//len_list: 119
//==============================


//==============================
    submit.push(7752);
    ref.push(7752);

//len_list: 120
//==============================


//==============================
    submit.push(7046);
    ref.push(7046);

//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1083
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.size();
    ret_ref = ref.size();
//num_require: 1084
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1085
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1086
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    submit.push(9807);
    ref.push(9807);

//len_list: 121
//==============================


//==============================
    submit.push(6248);
    ref.push(6248);

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    submit.push(7473);
    ref.push(7473);

//len_list: 122
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 121
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1087
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    ret_submit = submit.empty();
    ret_ref = ref.empty();
//num_require: 1088
    REQUIRE( ret_ref == ret_submit);
//len_list: 121
//==============================


//==============================
    submit.pop();
    ref.pop();

//len_list: 120
//==============================


//==============================
    ret_submit = submit.top();
    ret_ref = ref.top();
//num_require: 1089
    REQUIRE( ret_ref == ret_submit);
//len_list: 120
//==============================


}
