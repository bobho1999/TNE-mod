##############################
# Country definition for JAP #
##############################
province = { id = 1184 naval_base = 10 } # 東京都
province = { id = 1187 naval_base = 10 } # 大阪
province = { id = 1188 naval_base = 7 } # 广岛◆吴港
province = { id = 1189 naval_base = 7 } # 高知
province = { id = 1193 naval_base = 3 } # 冲绳
province = { id = 1196 naval_base = 8 } # 釜山
province = { id = 1199 naval_base = 7 } # 漢城
province = { id = 1202 naval_base = 7 } # 大連
province = { id = 1322 naval_base = 4 } # 高雄
province = { id = 3656 naval_base = 7 } # 横滨◆横须贺港

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  ai                 = "jap_1925.ai"
  belligerence       = 10
  capital            = 1184 # 東京都
  manpower           = 735
  peacetime_ic_mod       = 0.2
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 600
  escorts        = 100
  free = {
    energy         = 50
    metal          = 50
    rare_materials = 10
    oil            = 10
    supplies       = 10
    money          = 5
  }

  diplomacy = {
    relation = { tag = CHI value = 50 }
    relation = { tag = CGX value = 50 }
    relation = { tag = CHC value = 50 }
    relation = { tag = U02 value = 100 access = yes }
    relation = { tag = U11 value = 50 access = yes }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 10 }

  nationalprovinces      = { 1174 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1322 1323 1324 1376 1391 1392 1393 2990 2991 2995 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 1202 2605 3689 3690 3688 3686 3687 2930
1599 3589 1617 1612 1613 1615 1616 1610 1618 1619 1620 1621 1625 1626 1627 1785 1601 1609 1600 3587 1602 3588 1603 1604 1605 1606 1607 1608 1784 #pacific islands
 }
  ownedprovinces         = { 1174 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1322 1323 1324 1376 1391 1392 1393 2990 2991 2995 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 1202 2605 3689 3690 3688 3686 3687 2930
1599 3589 1617 1612 1613 1615 1616 1610 1618 1619 1620 1621 1625 1626 1627 1785 1601 1609 1600 3587 1602 3588 1603 1604 1605 1606 1607 1608 1784 #pacific islands
 }
  controlledprovinces    = { 1174 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1197 1198 1199 1200 1201 1322 1323 1324 1376 1391 1392 1393 2990 2991 2995 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 3682 3683 3684 3685 1202 2605 3689 3690 3688 3686 3687 2930
1599 3589 1617 1612 1613 1615 1616 1610 1618 1619 1620 1621 1625 1626 1627 1785 1601 1609 1600 3587 1602 3588 1603 1604 1605 1606 1607 1608 1784 #pacific islands
 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 5500 5200 5440 5430 5420 5410 5400 2600 2610 2620 2010 2000 2450 2440 2430 2280 2100 2130 2400 2240 2250 2260 2200 2210 2220 2320 2300 5140 5010 5050 5040 5030 1220 1210 1200 1190 1290 1280 1270 1260 1400 8000 8100 8200 8300 8400 8410 8310 8320 8210 8760 8070 8010 8020 8080 8040 8050 8030 8060 5100 5300 5110 5310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 8
    interventionism   = 8
  }
  chiefofair             = { type = 9 id = 16087 } # 列强 
  nationalidentity       = "policy_economy_military-state"
  socialpolicy           = "policy_social_bushido"
  nationalculture        = "policy_political_militarism"

  landunit = {
    id       = { type = 13016 id = 2021 }
    name     = "日本帝國大本營 "
    location = 1184
    division = {
      id             = { type = 13016 id = 565 }
      name           = "帝國參謀本部 "
      type           = hq
      model          = 2
      extra          = b_u9
      brigade_model  = 0
      strength       = 100
      experience     = 100
    }
    division = {
      id             = { type = 13016 id = 603 }
      name           = "東京灣要塞重炮聯隊 "
      type           = garrison
      model          = 3
      extra          = b_u4
      brigade_model  = 0
      strength       = 100
      experience     = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100000 }
    name     = "近卫师团'宫' "
    location = 1184
    division = {
      id             = { type = 13016 id = 100001 }
      name           = "近卫第1步兵旅团 "
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 0
      experience     = 90
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100002 }
      name           = "近卫第2步兵旅团 "
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 0
      experience     = 90
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100040 }
    name     = "第一东京甲种师团'玉' "
    location = 1184
    division = {
      id             = { type = 13016 id = 100041 }
      name           = "第1步兵旅团 "
      type           = mechanized
      model          = 35
      extra          = artillery
      brigade_model  = 2
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100042 }
      name           = "第2步兵旅团 "
      type           = infantry
      model          = 8
      extra          = heavy_armor
      brigade_model  = 2
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100050 }
    name     = "第二仙台甲种师团'勇'  "
    location = 1180
    division = {
      id             = { type = 13016 id = 100051 }
      name           = "第3步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 80
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100052 }
      name           = "第4步兵旅团 "
      type           = infantry
      model          = 8
      extra          = b_u8
      brigade_model  = 1
      experience     = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100010 }
    name     = "第三名古屋甲种师团'幸' "
    location = 1185
    division = {
      id             = { type = 13016 id = 100011 }
      name           = "第5步兵旅团 "
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 1
      experience     = 70
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100012 }
      name           = "第29歩兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100060 }
    name     = "第四大阪甲种师团'淀' "
    location = 1187
    division = {
      id             = { type = 13016 id = 100061 }
      name           = "第7步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100062 }
      name           = "第8步兵旅团 "
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 1
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100020 }
    name     = "第五广岛甲种师团'鲤' "
    location = 1188
    division = {
      id             = { type = 13016 id = 100021 }
      name           = "第9步兵旅团 "
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 0
      experience     = 80
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100022 }
      name           = "第21步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 3
      experience     = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100030 }
    name     = "第六熊本甲种师团'明' "
    location = 3667
    division = {
      id             = { type = 13016 id = 100031 }
      name           = "第11步兵旅团 "
      type           = infantry
      model          = 8
      extra          = b_u8
      brigade_model  = 1
      experience     = 70
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100032 }
      name           = "第36步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 70
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100100 }
    name     = "第七旭川甲种师团'熊' "
    location = 1178
    division = {
      id             = { type = 13016 id = 100101 }
      name           = "第13步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100102 }
      name           = "第14步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100110 }
    name     = "第八弘前甲种师团'杉' "
    location = 3651
    division = {
      id             = { type = 13016 id = 100111 }
      name           = "第4步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100112 }
      name           = "第16步兵旅团 "
      type           = infantry
      model          = 8
      extra          = police
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100120 }
    name     = "第九金泽甲种师团'武' "
    location = 3658
    division = {
      id             = { type = 13016 id = 100121 }
      name           = "第6步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100122 }
      name           = "第18步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100130 }
    name     = "第十姬路甲种师团'鉄' "
    location = 1187
    division = {
      id             = { type = 13016 id = 100131 }
      name           = "第8步兵旅团 "
      type           = infantry
      model          = 8
      extra          = anti_air
      brigade_model  = 1
      experience     = 80
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100132 }
      name           = "第33步兵旅团 "
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 0
      experience     = 80
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100140 }
    name     = "第十一善通寺甲种师团'锦' "
    location = 1189
    division = {
      id             = { type = 13016 id = 100141 }
      name           = "第10步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100142 }
      name           = "第22步兵旅团 "
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100070 }
    name     = "    第十二小仓甲种师团'剣' "
    location = 3666
    division = {
      id             = { type = 13016 id = 100071 }
      name           = "第12步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 60
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100072 }
      name           = "第24步兵旅团 "
      type           = infantry
      model          = 8
      extra          = light_armor_brigade
      brigade_model  = 0
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100150 }
    name     = "第十四宇都宮甲种师团'照' "
    location = 1182
    division = {
      id             = { type = 13016 id = 100151 }
      name           = "第27步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100152 }
      name           = "第28步兵旅团 "
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100160 }
    name     = "第十六京都甲种师团'垣' "
    location = 1186
    division = {
      id             = { type = 13016 id = 100161 }
      name           = "第19步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100162 }
      name           = "第30步兵旅团 "
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 553 }
    name     = "日本帝國台灣軍 "
    location = 1323
    division = {
      id             = { type = 13016 id = 554 }
      name           = "台灣步兵混成旅團 "
      type           = infantry
      model          = 7
      extra          = police
      brigade_model  = 1
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 13016 id = 555 }
    name     = "日本帝國朝鮮軍 "
    location = 1199
    leader   = 101101
    division = {
      id             = { type = 13016 id = 556 }
      name           = "朝鮮軍司令部"
      type           = hq
      model          = 2
      extra          = b_u9
      brigade_model  = 0
      strength       = 100
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 13016 id = 100080 }
    name     = "第十九罗南甲种师团'虎'"
    location = 1376
    division = {
      id             = { type = 13016 id = 100081 }
      name           = "第37步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      strength       = 100
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100082 }
      name           = "第38步兵旅团 "
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100090 }
    name     = "第二十龙山甲种师团'朝' "
    location = 1199
    division = {
      id             = { type = 13016 id = 100091 }
      name           = "第39步兵旅团 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      experience     = 40
      locked         = yes
    }
    division = {
      id             = { type = 13016 id = 100092 }
      name           = "第40步兵旅团 "
      type           = infantry
      model          = 8
      extra          = engineer
      brigade_model  = 0
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 561 }
    name     = "永興灣要塞司令部 "
    location = 1200
    division = {
      id             = { type = 13016 id = 562 }
      name           = "永興灣要塞守備隊"
      type           = garrison
      model          = 3
      extra          = b_u4
      brigade_model  = 0
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 5613 }
    name     = "鎮海灣要塞司令部 "
    location = 1196
    division = {
      id             = { type = 13016 id = 564 }
      name           = "鎮海灣要塞守備隊"
      type           = garrison
      model          = 3
      extra          = b_u4
      brigade_model  = 0
      experience     = 60
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100170 }
    name     = "旅顺要塞司令部 "
    location = 1202
    division = {
      id             = { type = 13016 id = 100171 }
      name           = "旅顺要塞司令部 "
      type           = garrison
      model          = 2
      extra          = police
      brigade_model  = 1
      strength       = 100
      experience     = 100
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 100180 }
    name     = "独立守备队 "
    location = 1389
    division = {
      id             = { type = 13016 id = 100181 }
      name           = "独立守备队 "
      type           = garrison
      model          = 3
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2437 }
    name     = "帝國陸軍高雄守備司令部"
    location = 1322
    division = {
      id             = { type = 13016 id = 2438 }
      name           = "帝國陸軍台湾守備隊"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 2439 }
    name     = "帝國陸軍冲绳守備司令部"
    location = 1193
    division = {
      id             = { type = 13016 id = 2440 }
      name           = "帝國陸軍冲绳守備隊"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 541 }
    name     = "帝國陸軍北海道守備司令部 "
    location = 1179
    division = {
      id             = { type = 13016 id = 542 }
      name           = "帝國陸軍北海道守備隊 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 13016 id = 543 }
    name     = "帝國陸軍对马岛守備司令部 "
    location = 3685
    division = {
      id             = { type = 13016 id = 544 }
      name           = "帝國陸軍对马岛守備隊 "
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 2
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 13016 id = 1000 }
    name     = "日本聯合艦隊直属本隊 "
    location = 3656
    base     = 3656
    leader   = 101296
    division = {
      id             = { type = 13016 id = 1011 }
      name           = "ＩＪＮ 長門號 "
      type           = battleship
      model          = 2
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1012 }
      name           = "ＩＪＮ 陸奥號 "
      type           = battleship
      model          = 2
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1009 }
      name           = "矢風 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1001 }
    name     = "日本聯合艦隊第1艦隊 "
    location = 3656
    base     = 3656
    leader   = 101258
    division = {
      id             = { type = 13016 id = 1013 }
      name           = "ＩＪＮ 伊勢號 "
      type           = battleship
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1014 }
      name           = "ＩＪＮ 日向號 "
      type           = battleship
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1015 }
      name           = "ＩＪＮ 扶桑號 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1016 }
      name           = "ＩＪＮ 山城號 "
      type           = battleship
      model          = 0
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      extra5         = none
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      brigade_model5 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1018 }
      name           = "ＩＪＮ 榛名號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1021 }
      name           = "青葉號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1022 }
      name           = "衣笠號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1023 }
      name           = "古鷹號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1024 }
      name           = "加古號 "
      type           = heavy_cruiser
      model          = 1
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1025 }
      name           = "阿武隈號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1072 }
      name           = "球磨號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1106 }
      name           = "多摩號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1107 }
      name           = "木曾號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1027 }
      name           = "大井號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1040 }
      name           = "川內號 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1070 }
      name           = "足柄號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1074 }
      name           = "皐月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1075 }
      name           = "文月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1076 }
      name           = "長月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1077 }
      name           = "水無月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1078 }
      name           = " 朝風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1079 }
      name           = "春風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1080 }
      name           = "松風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1081 }
      name           = "旗風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1028 }
      name           = "三日月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1029 }
      name           = "夕風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1002 }
    name     = "日本聯合艦隊第2艦隊 "
    location = 3656
    base     = 3656
    leader   = 101300
    division = {
      id             = { type = 13016 id = 1017 }
      name           = "ＩＪＮ 金剛號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1019 }
      name           = "ＩＪＮ 霧島號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1020 }
      name           = "ＩＪＮ 比叡號 "
      type           = battlecruiser
      model          = 1
      extra1         = naval_sa_l
      extra2         = naval_fire_controll_l
      extra3         = naval_spotter_l
      extra4         = naval_anti_air_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1059 }
      name           = "那智號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1060 }
      name           = "羽黒號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1061 }
      name           = "妙高號 "
      type           = heavy_cruiser
      model          = 2
      extra1         = naval_fire_controll_l
      extra2         = naval_spotter_l
      extra3         = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1064 }
      name           = "神通號 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1065 }
      name           = "那珂號 "
      type           = light_cruiser
      model          = 2
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1086 }
      name           = "天龍號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1087 }
      name           = "龍田號 "
      type           = light_cruiser
      model          = 0
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1088 }
      name           = "夕張號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1108 }
      name           = "鬼怒號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1026 }
      name           = "北上號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1071 }
      name           = "長良號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1109 }
      name           = "由良號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1073 }
      name           = "名取號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1089 }
      name           = "睦月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1090 }
      name           = "如月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1092 }
      name           = "望月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1091 }
      name           = "彌生號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1093 }
      name           = "追風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1094 }
      name           = "疾風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1095 }
      name           = "朝凪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1126 }
      name           = "大刀風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1096 }
      name           = "夕凪號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1201 }
    name     = "日本聯合艦隊第1航空艦隊 "
    location = 3656
    base     = 3656
    leader   = 101259
    division = {
      id             = { type = 13016 id = 1124 }
      name           = "ＩＪＮ 赤城號 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1125 }
      name           = "ＩＪＮ 加賀號 "
      type           = carrier
      model          = 1
      extra1         = cag
      brigade_model1 = 2
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 21402 }
      name           = "鳳翔號 "
      type           = escort_carrier
      model          = 0
      extra1         = b_u1
      brigade_model1 = 6
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1127 }
      name           = "五十鈴號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1128 }
      name           = "川内號 "
      type           = light_cruiser
      model          = 1
      extra1         = naval_spotter_l
      extra2         = naval_anti_air_s
      brigade_model1 = 1
      brigade_model2 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1129 }
      name           = "菊月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1130 }
      name           = "夕月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1131 }
      name           = "卯月號 "
      type           = destroyer
      model          = 2
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1136 }
      name           = "汐風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1137 }
      name           = "帆風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
      experience     = 20
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1202 }
    name     = "日本聯合艦隊第6潜水艦隊 "
    location = 3656
    base     = 3656
    division = {
      id             = { type = 13016 id = 1139 }
      name           = "伊-1號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1140 }
      name           = "伊-2號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1141 }
      name           = "伊-3號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1142 }
      name           = "伊-4號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1082 }
      name           = "伊-121號 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1083 }
      name           = "伊-122號 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1084 }
      name           = "伊-123號 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1085 }
      name           = "伊-124號 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1122 }
      name           = "呂-33號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1123 }
      name           = "呂-34號 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 13016 id = 1097 }
      name           = "呂-60號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1098 }
      name           = "呂-61號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1099 }
      name           = "呂-62號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1100 }
      name           = "呂-63號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1101 }
      name           = "呂-64號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1102 }
      name           = "呂-65號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1103 }
      name           = "呂-66號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1104 }
      name           = "呂-67號 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 13016 id = 1105 }
      name           = "呂-68號 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1203 }
    name     = "日本聯合艦隊第1运输支隊 "
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1151 }
      name           = "峰風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1152 }
      name           = "朝陽丸號 "
      type           = transport
      model          = 0
      experience     = 10
    }
    division = {
      id             = { type = 13016 id = 1153 }
      name           = "観光丸號 "
      type           = transport
      model          = 0
      experience     = 10
    }
    division = {
      id             = { type = 13016 id = 1154 }
      name           = "咸臨丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1155 }
      name           = "鳳凰丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1156 }
      name           = "立象丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1157 }
      name           = "快風丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1204 }
    name     = "日本聯合艦隊第2运输支隊 "
    location = 1187
    base     = 1187
    division = {
      id             = { type = 13016 id = 1158 }
      name           = "沖風號 "
      type           = destroyer
      model          = 1
      extra1         = naval_fire_controll_s
      brigade_model1 = 0
      experience     = 20
    }
    division = {
      id             = { type = 13016 id = 1159 }
      name           = "開運丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1160 }
      name           = "長鯨丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1161 }
      name           = "大坂丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1162 }
      name           = "虹橋船號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1163 }
      name           = "行速丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1164 }
      name           = "東京丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1180 }
    name     = "日本聯合艦隊第3运输支隊 "
    location = 3656
    base     = 3656
    division = {
      id             = { type = 13016 id = 1181 }
      name           = "千早號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1182 }
      name           = "函容丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1183 }
      name           = "樺太丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1184 }
      name           = "華陽丸號 "
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 13016 id = 1190 }
    name     = "日本聯合艦隊第4运输支隊 "
    location = 1188
    base     = 1188
    division = {
      id             = { type = 13016 id = 1191 }
      name           = "曙丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1192 }
      name           = "龍田丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1193 }
      name           = "新田丸號 "
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 13016 id = 1194 }
      name           = "日出丸號 "
      type           = transport
      model          = 0
    }
  }

  landdivision = { dormant = yes id = { type = 13016 id = 501 } name = "關東軍司令部 "  type = hq model = 3 strength = 100 experience = 80 extra = b_u9 brigade_model = 0 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 502 } name = "關東州警備司令部 "  type = infantry model = 8 strength = 100 extra = police brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 503 } name = "大陸鐵道司令部 "  type = infantry model = 8 strength = 100 extra = police brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 13016 id = 1 } name = "第11步兵旅团 "  type = infantry model = 8 experience = 70 extra = b_u8 brigade_model = 1 } 
  landdivision = { dormant = yes id = { type = 13016 id = 2 } name = "第36步兵旅团 "  type = infantry model = 8 experience = 70 extra = artillery brigade_model = 2 } 
}
