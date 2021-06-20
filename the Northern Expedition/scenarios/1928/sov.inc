##############################
# Country definition for SOV #
##############################

country = {
  tag                = SOV
  regular_id         = RUS
  ai                 = "sov_1925.ai"
  intrinsic_gov_type = leninist
  capital            = 1548 # 新西伯利亞
  dissent            = 15
  extra_tc           = 50
  manpower           = 1600
  ground_def_eff     = 0.2
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 30
  transports     = 140
  escorts        = 30
  free = {
    ic             = 50
#    manpower       = 200
    energy         = 50
    metal          = 50
    rare_materials = 7
    oil            = 10
    supplies       = 10
    money          = 5
  }

  diplomacy = {
    relation = { 
		tag = MON 
		value = 200
		guaranteed = { day = 30 month = december year = 1924 }
		}
    relation = { 
		tag = TAN 
		value = 200
		guaranteed = { day = 30 month = december year = 1924 } 
		}
    relation = { tag = CHI value = 100 }
    relation = { tag = CGX value = 100 }
    relation = { tag = CHC value = 200 }
    relation = { tag = U02 value = 20 }
    relation = { tag = U03 value = 50 }
  }

  nationalprovinces      = { #外東北
			     1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 
			#外西北
			     1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 
			#西伯利亞
			     157 164 165 192 1155 1157 1158 1162 1383 1384 1409	1411 1412 1413 1414 1415 1416 1417 1520	1521 1522 1539 1540 1541 1542 1543 1544	1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 
			#中亞
			     1425 1426 1554 1555 1582 1586 1588	1590 1592 3460 3463 1568 1569 1576 1578	1579 1580 1581 1583 1589 3465 3474 1550	1551 1553 3455 3458 3459 1485 1587 3475	3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482	3483 3484 
			#遠東西伯利亞地區
			     1166	1171	1172	1524	1525	3640	1405	1156	1163	1164	1410	3489 
				 }

  ownedprovinces         = {  #外東北
			     1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 
			#外西北
			     1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 
			#西伯利亞
			     157 164 165 192 1155 1157 1158 1162 1383 1384 1409	1411 1412 1413 1414 1415 1416 1417 1520	1521 1522 1539 1540 1541 1542 1543 1544	1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 
			#中亞
			     1425 1426 1554 1555 1582 1586 1588	1590 1592 3460 3463 1568 1569 1576 1578	1579 1580 1581 1583 1589 3465 3474 1550	1551 1553 3455 3458 3459 1485 1587 3475	3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482	3483 3484 
			#遠東西伯利亞地區
			     1166	1171	1172	1524	1525	3640	1405	1156	1163	1164	1410	3489 
				 }

  controlledprovinces    = {  #外東北
			     1528 1523 1159 1160 1161 1165 1175 1367 1368 1527 1366 1526 1167 1529 1372 1373 1370 1371 1369 2818 3559 3558 
			#外西北
			     1428 1429 3466 3467 3468 3469 3473 1423 1556 3456 3457 1152 1557 1558 201 1563 1422 1424 3449 3450 3451 3452 3453 3454 3485 3486 3487 
			#西伯利亞
			     157 164 165 192 1155 1157 1158 1162 1383 1384 1409	1411 1412 1413 1414 1415 1416 1417 1520	1521 1522 1539 1540 1541 1542 1543 1544	1545 1546 1547 1548 1549 1552 1559 1560 1561 1562 1564 1565 1566 1591 3568 
			#中亞
			     1425 1426 1554 1555 1582 1586 1588	1590 1592 3460 3463 1568 1569 1576 1578	1579 1580 1581 1583 1589 3465 3474 1550	1551 1553 3455 3458 3459 1485 1587 3475	3476 3477 1490 1491 1598 3461 3462 3488 1427 1487 1488 1489 1584 1585 3479 3482	3483 3484 
			#遠東西伯利亞地區
			     1166	1171	1172	1524	1525	3640	1405	1156	1163	1164	1410	3489
				 }

  techapps               = { 3410 1090 1080 1070 1060 1050 1040 1030 1020 1010  1310 1320 1220 1210 1200 1190 1260 1400 5500 5100 5140 8000 8100 8200 8300 8400 8410 8310 8210 8710 8070 8010 8020 8050 8040 8080 8030 8060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 4
  }
#  chiefofnavy            = { type = 9 id = 16087 } # 列强 
  chiefofair             = { type = 9 id = 16087 } # 蘇聯 
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 10848 id = 380 }
    name     = "远东特别部队 "
    location = 1523
    division = {
      id             = { type = 10848 id = 381 }
      name           = "红军第35'西伯利亚'步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 382 }
      name           = "红军第66步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 383 }
      name           = "红军第101山地步兵师 "
      type           = bergsjaeger
      model          = 2
      strength       = 30
    }
  }
  landunit =
  { id       = { type = 10848 id = 190 }
    name     = "红军第24机械化军团 "
    location = 1520
    division =
    { id       = { type = 10848 id = 191 }
      name     = "红军第213摩托化师 "
      strength = 80
      type     = motorized
      model = 18
      extra    = armored_car
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10848 id = 370 }
    name     = "乌克兰红军第21军团 "
    location = 1528
    division =
    { id       = { type = 10848 id = 371 }
      name     = "红军第59步兵师 "
      strength = 80
      type     = infantry
      model = 18
      extra    = anti_tank
      experience = 20
    }
    division =
    { id       = { type = 10848 id = 372 }
      name     = "红军第22'克拉斯诺达尔'步兵师 "
      strength = 80
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 373 }
      name     = "红军第1步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 374 }
      name     = "红军第4'斯摩棱斯克'步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 375 }
      name     = "红军第5'戈罗多克'近卫步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 376 }
      name     = "红军第239摩托化师 "
      strength = 30
      type     = motorized
      model = 18
      extra    = artillery
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10848 id = 200 }
    name     = "苏联红军第5军团 "
    location = 1368
    division =
    { id       = { type = 10848 id = 201 }
      name     = "红军第45'沃伦'步兵师 "
      strength = 80
      type     = infantry
      model = 18
      extra    = artillery
      experience = 20
    }
    division =
    { id       = { type = 10848 id = 202 }
      name     = "红军第87步兵师 "
      strength = 80
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 203 }
      name     = "红军第62'土耳其斯坦'步兵师 "
      strength = 80
      type     = infantry
      model = 18
      extra    = artillery
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10848 id = 180 }
    name     = "红军第15机械化军团 "
    location = 1370
    division =
    { id       = { type = 10848 id = 181 }
      name     = "红军第212摩托化师 "
      strength = 80
      type     = motorized
      model = 18
      extra    = b_u8
      experience = 20
    }
  }
  landunit =
  { id       = { type = 10848 id = 210 }
    name     = "苏联红军第6军团 "
    location = 1372
    division =
    { id       = { type = 10848 id = 211 }
      name     = "红军第159步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 212 }
      name     = "红军第139步兵师 "
      strength = 80
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 213 }
      name     = "红军第141步兵师 "
      strength = 80
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 214 }
      name     = "红军第3'比萨拉比亚'骑兵师 "
      strength = 80
      type     = cavalry
      model = 23
    }
    division =
    { id       = { type = 10848 id = 215 }
      name     = "红军第81摩托化师 "
      strength = 80
      type     = motorized
      model = 18
      extra    = artillery
      experience = 20
    }
  }
  landunit = {
    id       = { type = 10848 id = 340 }
    name     = "贝加尔湖军管部队 "
    location = 1520
    division = {
      id             = { type = 10848 id = 341 }
      name           = "红军第65步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 342 }
      name           = "红军第114步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 343 }
      name           = "红军第93'哈尔科夫'步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 344 }
      name           = "红军第94步兵师 "
      type           = infantry
      model          = 8
      strength       = 80
    }
  }
  landunit =
  { id       = { type = 10848 id = 330 }
    name     = "中亚军管部队 "
    location = 1556
    division =
    { id       = { type = 10848 id = 331 }
      name     = "红军第68'土耳其斯坦'山地步兵师 "
      strength = 100
      type     = bergsjaeger
    }
    division =
    { id       = { type = 10848 id = 332 }
      name     = "红军第20'普罗列塔东'山地步兵师 "
      strength = 100
      type     = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 10848 id = 360 }
    name     = "苏联红军第1军团 "
    location = 1383
    division =
    { id       = { type = 10848 id = 361 }
      name     = "红军第39步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 362 }
      name     = "红军第26'兹拉托乌斯特'步兵师 "
      strength = 100
      type     = infantry
      model = 18
    }
    division =
    { id       = { type = 10848 id = 363 }
      name     = "红军第21'彼尔姆'步兵师 "
      strength = 100
      type     = infantry
      model = 18
      extra    = artillery
      experience = 20
    }
  }
  navalunit = {
    id       = { type = 10848 id = 440 }
    name     = "红旗太平洋舰队 "
    location = 1372
    base     = 1372
    division = {
      id             = { type = 10848 id = 441 }
      name           = "红军第7驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 442 }
      name           = "红军第12潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 443 }
      name           = "红军第13潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 444 }
      name           = "红军第14潜艇编队 "
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 10848 id = 445 }
      name           = "红军第17潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 446 }
      name           = "红军第26潜艇编队 "
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10848 id = 447 }
      name           = "红军第1运输舰编队 "
      type           = transport
    }
  }
}
