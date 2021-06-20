##############################
# Country definition for U17 #
##############################

country = {
  tag                = U17
  regular_id         = CHI
  capital            = 1227 # Âåê–
  dissent            = 20
  manpower           = 15
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 10
  escorts        = 2

  nationalprovinces      = { 2840 2841 2842 2843 2844 1229 2845 1227 2847 2848 1230 1876 2849 1223 2838 1224 2839 1228 2846 1272 2794 1271 2792 2791 2789 2790 1278 2786 1270 2788 1887 2787 1269 2781 1267 2783 2782 2784 1268 }
  ownedprovinces         = { 2840 2841 2842 2843 2844 1229 2845 1227 }
  controlledprovinces    = { 2840 2841 2842 2843 2844 1229 2845 1227 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 3510 3300 3310 3340 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 3
  }
  headofstate            = { type = 6 id = 14533 } # º©Óñçû 
  chiefofnavy            = { type = 9 id = 16119 } # ê‘ÜŠ¹ÜÝ 
  chiefofair             = { type = 9 id = 16008 } # ±±ÑóÜŠéy 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"
}
