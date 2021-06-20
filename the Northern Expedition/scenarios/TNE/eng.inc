##############################
# Country definition for ENG #
##############################
province = { id = 1288 naval_base = 8 } # 吉大港
province = { id = 1291 ic = 1 } # 密支那
province = { id = 1295 ic = 1 } # 腊戎
province = { id = 1296 ic = 1 } # 曼德勒
province = { id = 1299 naval_base = 8 } # 仰光
province = { id = 1315 naval_base = 7 } # 香港
province = { id = 1353 naval_base = 8 } # 新加坡

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  capital            = 1469 # 德里
  manpower           = 600
  peacetime_ic_mod       = 0.2
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 200
  escorts        = 100
  free = {
    ic             = 70
    energy         = 50
    metal          = 50
    rare_materials = 10
    oil            = 10
    supplies       = 10
    money          = 5
  }

  diplomacy = {
    relation = { tag = U06 value = 50 }
    relation = { tag = U05 value = 50 }
    relation = { tag = FRA value = 100 }
    relation = {
      tag        = TIB
      value      = 50
      guaranteed = { year = 1924 month = december day = 30 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 10 }

  nationalprovinces      = { 1297 1298 1299 1300 1301 1302 1304 1346 1289 1290 1292 1295 1296 1291 1349 1350 1351 1352 1353 3701 3700 3694 3693 3695 3698 3699 3697 3696 3691 3692 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 3950 }
  ownedprovinces         = { 1315 1297 1298 1299 1300 1301 1302 1304 1346 1289 1290 1292 1295 1296 1291 1349 1350 1351 1352 1353 3701 3700 3694 3693 3695 3698 3699 3697 3696 3691 3692 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 3950 }
  controlledprovinces    = { 1315 1297 1298 1299 1300 1301 1302 1304 1346 1289 1290 1292 1295 1296 1291 1349 1350 1351 1352 1353 3701 3700 3694 3693 3695 3698 3699 3697 3696 3691 3692 3736 3737 3738 1284 1285 1286 1287 1288 1454 1456 1457 1458 1459 1460 1461 1462 1463 1464 1465 1466 1467 1468 1469 1470 1471 1472 1474 1475 1476 1477 1478 1479 1480 1481 1482 1483 1494 1505 1506 1507 1508 1509 1510 1511 1512 1513 1514 1515 1516 1517 1518 1519 1877 1878 3771 3772 3773 3774 3775 3776 3777 3778 3779 3780 3781 3782 3783 3784 3785 3786 3787 3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819 3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858 3859 3860 3861 3862 3863 3950 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 5500 5200 5240 5230 5220 5210 5510 5520 5530 5540 5400 5410 5420 5430 5440 5030 5040 5050 5060 5100 5110 5120 5300 5310 5140 5150 5010 8000 8100 8200 8300 8400 8410 8420 8210 8220 8110 8120 8070 8010 8080 8040 8020 8050 8310 8320 8330 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    freedom           = 10
    free_market       = 8
    professional_army = 7
    defense_lobby     = 3
    interventionism   = 1
  }
  chiefofair             = { type = 9 id = 16087 } # 列强 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Puritanism-liberalism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 12700 id = 8 }
    name     = "香港防卫司令部 "
    location = 1315
    division = {
      id             = { type = 12700 id = 9 }
      name           = "皇家香港军团 "
      type           = garrison
      model          = 2
      extra          = artillery
      brigade_model  = 3
      strength       = 100
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 10 }
    name     = "远东防卫司令部 "
    location = 1353
    division = {
      id             = { type = 12700 id = 11 }
      name           = "新加坡卫戍要塞群 "
      type           = garrison
      model          = 2
      extra          = b_u8
      brigade_model  = 0
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 12700 id = 21 }
    name     = "印度军团陆军第I军 "
    location = 1469
    division = {
      id             = { type = 12700 id = 22 }
      name           = "陆军第1印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 23 }
    name     = "印度军团陆军第II军 "
    location = 1285
    division = {
      id             = { type = 12700 id = 24 }
      name           = "陆军第2印度步兵师 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 25 }
    name     = "印度军团陆军第III军 "
    location = 1299
    division = {
      id             = { type = 12700 id = 26 }
      name           = "陆军第3印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 27 }
    name     = "印度军团陆军第IV军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 28 }
      name           = "陆军第4印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 29 }
    name     = "印度军团陆军第V军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 30 }
      name           = "陆军第5印度步兵师 "
      type           = infantry
      model          = 8
      extra          = b_u8
      brigade_model  = 1
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 31 }
    name     = "印度军团陆军第VI军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 32 }
      name           = "陆军第6印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 33 }
    name     = "印度军团陆军第VII军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 34 }
      name           = "陆军第7印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 35 }
    name     = "印度军团陆军第VIII军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 36 }
      name           = "陆军第8印度步兵师 "
      type           = infantry
      model          = 8
      extra          = anti_tank
      brigade_model  = 0
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 37 }
    name     = "印度军团陆军第IX军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 38 }
      name           = "陆军第9印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 39 }
    name     = "印度军团陆军第X军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 40 }
      name           = "陆军第10印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 12700 id = 41 }
    name     = "印度军团陆军第XI军 "
    location = 1457
    division = {
      id             = { type = 12700 id = 42 }
      name           = "陆军第11印度步兵师 "
      type           = infantry
      model          = 8
      strength       = 100
      experience     = 15
    }
  }

  navalunit = {
    id       = { type = 12700 id = 187 }
    name     = "英国皇家海军东印舰队 "
    location = 1517
    base     = 1517
    division = {
      id             = { type = 12700 id = 188 }
      name           = "诺福克号 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 2
      brigade_model3 = 1
    }
    division = {
      id             = { type = 12700 id = 189 }
      name           = "迪奥梅德号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = naval_anti_air_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 190 }
      name           = "翡翠号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 191 }
      name           = "企业号 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_fire_controll_s
      extra2         = naval_spotter_s
      brigade_model1 = 0
      brigade_model2 = 1
    }
    division = {
      id             = { type = 12700 id = 276 }
      name           = "皇家海军第27驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 12700 id = 192 }
      name           = "皇家海军第28驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
  navalunit = {
    id       = { type = 12700 id = 193 }
    name     = "英国皇家海军中国舰队 "
    location = 1315
    base     = 1315
    division = {
      id             = { type = 12700 id = 201 }
      name           = "开普敦号 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_fire_controll_s
      extra2         = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division = {
      id             = { type = 12700 id = 202 }
      name           = "皇家海军第29驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
    division = {
      id             = { type = 12700 id = 203 }
      name           = "皇家海军第30驱逐舰编队 "
      type           = destroyer
      model          = 0
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
}
