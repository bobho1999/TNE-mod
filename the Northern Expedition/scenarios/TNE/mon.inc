##############################
# Country definition for MON #
##############################

country = {
  tag                = MON
  puppet             = SOV
  capital            = 1404 # �삐�����m���У�
  manpower           = 7
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = SOV value = 200 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 10 }

  nationalprovinces      = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 }
  ownedprovinces         = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 }
  controlledprovinces    = { 1420 1419 1434 1436 1437 1438 1399 1404 1385 2940 2948 2949 2950 2951 2954 }

  techapps               = { 3450 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 5
    free_market       = 3
    professional_army = 2
    defense_lobby     = 4
    interventionism   = 1
  }
  chiefofnavy            = { type = 9 id = 16078 } # �ٔ����� 
  chiefofair             = { type = 9 id = 16049 } # �K 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_collectivism"
  nationalculture        = "policy_political_stalinist"

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "�ɹŹ��͹���1�� "
    location = 1404
    division = {
      id             = { type = 30500 id = 2 }
      name           = "�ɹŵ�1���ʦ "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 3 }
      name           = "�ɹŵ�2���ʦ "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "�ɹŵ�3���ʦ "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
    division = {
      id             = { type = 30500 id = 5 }
      name           = "�ɹŵ�4���ʦ "
      type           = cavalry
      model          = 4
      extra          = artillery
      brigade_model  = 0
    }
  }
}
