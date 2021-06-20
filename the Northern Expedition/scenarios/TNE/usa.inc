##############################
# Country definition for USA #
##############################
province = { id = 1737 naval_base = 7 } # 马尼拉

#####################
# Country main data #
#####################

country = {
  tag                = USA
  capital            = 1737 # 马尼拉
  extra_tc           = 100
  manpower           = 600
  peacetime_ic_mod       = 0.2
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 150
  escorts        = 80
  free = {
    ic             = 70
#    manpower       = 200
    energy         = 50
    metal          = 50
    rare_materials = 5
    oil            = 10
    supplies       = 10
    money          = 5
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 10 }

  nationalprovinces      = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765 3766 3769 3770
1624 1786 662 2604 1766 661 658 659 660 663 #pacific islands
  }
  ownedprovinces         = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765 3766 3769 3770
1624 1786 662 2604 1766 661 658 659 660 663  #pacific islands
  }
  controlledprovinces    = { 1662 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 3739 3752 3761 3762 3763 3764 3765 3766 3769 3770
1624 1786 662 2604 1766 661 658 659 660 663 #pacific islands
  }

  techapps               = { 3400 3300 3320 3330 3370 1090 1080 1070 1060 1050 1040 1030 1020 1010  1220 1210 1200 1190 1290 1280 1270 1260 1400 1330 1320 1310 5500 5200 5210 5510 5240 5230 5520 5530 5540 5220 5550 5100 5300 5110 5310 5010 5040 5050 5440 5430 5420 5410 5400 8070 8010 8020 8030 8060 8050 8040 8080 8000 8100 8200 8300 8400 8700 8760 8740 8210 8410 8420 8310 8320 8110 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 10
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
#  chiefofnavy            = { type = 9 id = 16087 } # 列强 
  chiefofair             = { type = 9 id = 16087 } # 美國 
  nationalidentity       = "policy_economy_finance"
  socialpolicy           = "policy_social_integration"
  nationalculture        = "policy_political_republicanism"

  landunit = {
    id       = { type = 14800 id = 1 }
    name     = "菲律賓防衛司令部"
    location = 1737
    division = {
      id             = { type = 14800 id = 2 }
      name           = "馬尼拉守備隊"
      type           = garrison
      model          = 2
      extra          = police
      brigade_model  = 1
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 14800 id = 81 }
    name     = "美国太平洋舰队 "
    location = 1737
    base     = 1737
    division = {
      id             = { type = 14800 id = 82 }
      name           = "第13驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 83 }
      name           = "第14驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 84 }
      name           = "第15驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 179 }
      name           = "第31驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 180 }
      name           = "第32驱逐舰编队 "
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 14800 id = 85 }
      name           = "S-7号 "
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 14800 id = 86 }
      name           = "S-8号 "
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 14800 id = 87 }
    name     = "第II潜艇战队 "
    location = 1737
    base     = 1737
    division = {
      id             = { type = 14800 id = 88 }
      name           = "S-9号 "
      type           = submarine
      model          = 1
    }
  }
}
