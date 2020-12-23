/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Portuguese (Brazil)
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_PT_BR_H
#define LANGUAGE_PT_BR_H

#define DISPLAY_CHARSET_ISO10646_1
#define NOT_EXTENDED_ISO10646_1_5X7

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pronto.")

#define MSG_BACK                            _UxGT("Voltar")
#define MSG_SD_INSERTED                     _UxGT("Cartao inserido")
#define MSG_SD_REMOVED                      _UxGT("Cartao removido")
#define MSG_LCD_ENDSTOPS                    _UxGT("Finais")
#define MSG_MAIN                            _UxGT("Menu principal")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Desligar motores")
#define MSG_DEBUG_MENU                      _UxGT("Menu Debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Testar Barra de Prog")//resso
#define MSG_AUTO_HOME_X                     _UxGT("Ir na origem X")
#define MSG_AUTO_HOME_Y                     _UxGT("Ir na origem Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Ir na origem Z")
#define MSG_AUTO_HOME                       _UxGT("Ir na origem XYZ")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Calibrar Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Indo para origem")
#define MSG_LEVEL_BED_WAITING               _UxGT("Clique para Iniciar")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Proximo Ponto")
#define MSG_LEVEL_BED_DONE                  _UxGT("Fim da nivelacao!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Suavizar altura")
#define MSG_SET_HOME_OFFSETS                _UxGT("Compensar origem")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Alteracao feita")
#define MSG_SET_ORIGIN                      _UxGT("Ajustar Origem")
#define MSG_PREHEAT_1                       _UxGT("Pre-aquecer PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Pre-aq.Todo PLA")
#define MSG_PREHEAT_1_END                   _UxGT("Pre-aq.Extrusora")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Pre-aq.Mesa PLA")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Ajustar PLA")
#define MSG_PREHEAT_2                       _UxGT("Pre-aquecer ABS")
#define MSG_PREHEAT_2_N                     _UxGT("Pre-aquecer ABS")
#define MSG_PREHEAT_2_ALL                   _UxGT("Pre-aq.Todo ABS")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Pre-aq.Mesa ABS")
#define MSG_PREHEAT_2_END                   _UxGT("Pre-aq.Extrusora")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Ajustar ABS")
#define MSG_COOLDOWN                        _UxGT("Esfriar")
#define MSG_SWITCH_PS_ON                    _UxGT("Ligar")
#define MSG_SWITCH_PS_OFF                   _UxGT("Desligar")
#define MSG_EXTRUDE                         _UxGT("Extrusar")
#define MSG_RETRACT                         _UxGT("Retrair")
#define MSG_MOVE_AXIS                       _UxGT("Mover eixo")
#define MSG_BED_LEVELING                    _UxGT("Nivelacao Mesa")
#define MSG_LEVEL_BED                       _UxGT("Nivelar Mesa")
#define MSG_LEVEL_CORNERS                   _UxGT("Nivelar Cantos")
#define MSG_NEXT_CORNER                     _UxGT("Proximo Canto")
#define MSG_EDITING_STOPPED                 _UxGT("Fim da Edicao")

#define MSG_USER_MENU                       _UxGT("Comando customizado")
#define MSG_UBL_DOING_G29                   _UxGT("Executando G29")
#define MSG_UBL_UNHOMED                     _UxGT("Fora da Origam")
#define MSG_UBL_TOOLS                       _UxGT("Ferramentas UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Fazer malha manual")
#define MSG_UBL_BC_INSERT                   _UxGT("Calcar e calibrar")
#define MSG_UBL_BC_INSERT2                  _UxGT("Medir")
#define MSG_UBL_BC_REMOVE                   _UxGT("Remover e calibrar")

#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Indo para o Proximo")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Ativar UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Desativar UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Temp. Mesa")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Temp. Extrusora")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Editar Malha")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Editar Malha Custom")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ajuste Fino da Malha")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Fim da Edicao")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Montar Customi")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Montar ")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Montar PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Montar ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Montar fria")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Ajustar Altura")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Tamanho da Elevacao")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Validar Malha")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Checar PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Checar ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Validar Malha Custom")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continuar Malha")
#define MSG_UBL_MESH_LEVELING               _UxGT("Nivelacao da Malha")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Nivelacao 3 pontos")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Nivelacao Grid")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Nivelar Malha")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Cantos")
#define MSG_UBL_MAP_TYPE                    _UxGT("Tipo de Mapa")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Salvar Mapa da Malha")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Enviar Para Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Salvar Malha CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Salvar Backup")
#define MSG_UBL_INFO_UBL                    _UxGT("Informacao do UBL")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Editar Malha")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Qtd de Enchimento")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Enchimento Manual")
#define MSG_UBL_SMART_FILLIN                _UxGT("Enchimento Smart")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Preencher malha")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalidar tudo")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalidar proximo")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ajuste Fino de Todos")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ajuar Mais Proximo")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Armazenamento Malha")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot de Memoria")
#define MSG_UBL_LOAD_MESH                   _UxGT("Ler Malha")
#define MSG_UBL_SAVE_MESH                   _UxGT("Salvar Malha")
#define MSG_MESH_LOADED                     _UxGT("Malha %i carregada")
#define MSG_MESH_SAVED                      _UxGT("Malha %i salva")
#define MSG_NO_STORAGE                      _UxGT("Sem armazenamento")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Erro ao salvar UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Erro no restauro UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Compensacao Z parou")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL passo a passo")
#define MSG_LED_CONTROL                     _UxGT("Controle do LED")
#define MSG_LEDS                            _UxGT("Luz")
#define MSG_LED_PRESETS                     _UxGT("Configuracao da Luz")
#define MSG_SET_LEDS_RED                    _UxGT("Luz Vermelha")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Luz Laranja")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Luz Amarela")
#define MSG_SET_LEDS_GREEN                  _UxGT("Luz Verde")
#define MSG_SET_LEDS_BLUE                   _UxGT("Luz Azul")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Luz Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Luz Violeta")
#define MSG_SET_LEDS_WHITE                  _UxGT("Luz Branca")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Luz Padrao")
#define MSG_CUSTOM_LEDS                     _UxGT("Luz Customizada")
#define MSG_INTENSITY_R                     _UxGT("Intensidade Vermelho")
#define MSG_INTENSITY_G                     _UxGT("Intensidade Verde")
#define MSG_INTENSITY_B                     _UxGT("Intensidade Azul")
#define MSG_INTENSITY_W                     _UxGT("Intensidade Branco")
#define MSG_LED_BRIGHTNESS                  _UxGT("Brilho")

#define MSG_MOVING                          _UxGT("Movendo...")
#define MSG_FREE_XY                         _UxGT("Liberar XY")
#define MSG_MOVE_X                          _UxGT("Mover X")
#define MSG_MOVE_Y                          _UxGT("Mover Y")
#define MSG_MOVE_Z                          _UxGT("Mover Z")
#define MSG_MOVE_E                          _UxGT("Mover Extrusor")
#define MSG_MOVE_01MM                       _UxGT("Mover 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Mover 1mm")
#define MSG_MOVE_10MM                       _UxGT("Mover 10mm")
#define MSG_SPEED                           _UxGT("Velocidade")
#define MSG_BED_Z                           _UxGT("Base Z")
#define MSG_NOZZLE                          _UxGT("Hotend")
#define MSG_BED                             _UxGT("Mesa")
#define MSG_FAN_SPEED                       _UxGT("Vel. Ventoinha")
#define MSG_FLOW                            _UxGT("Vazao")
#define MSG_CONTROL                         _UxGT("Controle")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Fator")
#define MSG_AUTOTEMP                        _UxGT("Temp. Automatica")
#define MSG_ON                              _UxGT("Ligado ")
#define MSG_OFF                             _UxGT("Desligado")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Selecionar")
#define MSG_ACC                             _UxGT("Acel.")
#define MSG_JERK                            _UxGT("Jogo")
#if IS_SCARA
  #define MSG_VA_JERK                       _UxGT("jogo VA")
  #define MSG_VB_JERK                       _UxGT("jogo VB")
  #define MSG_VC_JERK                       _UxGT("jogo VZ")
#elif IS_DELTA
  #define MSG_VA_JERK                       _UxGT("jogo VA")
  #define MSG_VB_JERK                       _UxGT("jogo VB")
  #define MSG_VC_JERK                       _UxGT("jogo VC")
#else
  #define MSG_VA_JERK                       _UxGT("jogo VX")
  #define MSG_VB_JERK                       _UxGT("jogo VY")
  #define MSG_VC_JERK                       _UxGT("jogo VZ")
#endif
#define MSG_VE_JERK                         _UxGT("jogo VE")
#define MSG_VELOCITY                        _UxGT("Velocidade")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VDeslocamento min")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("Retrair A")
#define MSG_A_TRAVEL                        _UxGT("Movimento A")
#define MSG_STEPS_PER_MM                    _UxGT("Passo/mm")
#if IS_SCARA
  #define MSG_ASTEPS                        _UxGT("Passo A/deg")
  #define MSG_BSTEPS                        _UxGT("Passo B/deg")
  #define MSG_CSTEPS                        _UxGT("Passo Z/mm")
#elif IS_DELTA
  #define MSG_ASTEPS                        _UxGT("Passo A/mm")
  #define MSG_BSTEPS                        _UxGT("Passo B/mm")
  #define MSG_CSTEPS                        _UxGT("Passo C/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Passo X/mm")
  #define MSG_BSTEPS                        _UxGT("Passo Y/mm")
  #define MSG_CSTEPS                        _UxGT("Passo Z/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E/mm")
#define MSG_E1STEPS                         _UxGT("E1/mm")
#define MSG_E2STEPS                         _UxGT("E2/mm")
#define MSG_E3STEPS                         _UxGT("E3/mm")
#define MSG_E4STEPS                         _UxGT("E4/mm")
#define MSG_E5STEPS                         _UxGT("E5/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatura")
#define MSG_MOTION                          _UxGT("Movimento")
#define MSG_FILAMENT                        _UxGT("Filamento")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Extrusao em mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Diâmetro Fil.")
#define MSG_ADVANCE_K                       _UxGT("Avancar K")
#define MSG_CONTRAST                        _UxGT("Contraste")
#define MSG_STORE_EEPROM                    _UxGT("Salvar Configuracao")
#define MSG_LOAD_EEPROM                     _UxGT("Ler Configuracao")
#define MSG_RESTORE_FAILSAFE                _UxGT("Restauro seguro")
#define MSG_INIT_EEPROM                     _UxGT("Iniciar EEPROM")
#define MSG_REFRESH                         LCD_STR_REFRESH _UxGT(" Atualizacao")
#define MSG_WATCH                           _UxGT("Informacoes")
#define MSG_PREPARE                         _UxGT("Preparar")
#define MSG_TUNE                            _UxGT("Ajustar")
#define MSG_PAUSE_PRINT                     _UxGT("Pausar impressao")
#define MSG_RESUME_PRINT                    _UxGT("Resumir impressao")
#define MSG_STOP_PRINT                      _UxGT("Parar impressao")
#define MSG_CARD_MENU                       _UxGT("Imprimir do SD")
#define MSG_NO_CARD                         _UxGT("Sem cartao SD")
#define MSG_DWELL                           _UxGT("ZzZzZz...")
#define MSG_USERWAIT                        _UxGT("Clique para retomar")
#define MSG_PRINT_ABORTED                   _UxGT("Impressao Abortada")
#define MSG_NO_MOVE                         _UxGT("Sem movimento")
#define MSG_KILLED                          _UxGT("PARADA DE EMERGENCIA")
#define MSG_STOPPED                         _UxGT("PAROU. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrair mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Retrair Troca mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retrair V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Saltar mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Des-Retrair mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Des-RetTroca mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Des-Retrair  V")
#define MSG_AUTORETRACT                     _UxGT("Retracao Automatica")
#define MSG_FILAMENTCHANGE                  _UxGT("Trocar Filamento")
#define MSG_INIT_SDCARD                     _UxGT("Iniciar SD")
#define MSG_CNG_SDCARD                      _UxGT("Trocar SD")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda fora da mesa")
#define MSG_SKEW_FACTOR                     _UxGT("Fator de Cisalho")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Testar BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Reiniciar BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Implantar BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Condicionar BLTouch")

#define MSG_HOME                            _UxGT("Home")
#define MSG_FIRST                           _UxGT("Primeiro")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z offset")
#define MSG_BABYSTEP_X                      _UxGT("Passinho X")
#define MSG_BABYSTEP_Y                      _UxGT("Passinho Y")
#define MSG_BABYSTEP_Z                      _UxGT("Passinho Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Fim de Curso")
#define MSG_HEATING_FAILED_LCD              _UxGT("Aquecimento falhou")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Erro:Temp Redundante")
#define MSG_THERMAL_RUNAWAY                 _UxGT("ESCAPE TERMICO")
#define MSG_ERR_MAXTEMP                     _UxGT("Erro:Temp Maxima")
#define MSG_ERR_MINTEMP                     _UxGT("Erro:Temp Minima")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Erro:Temp Mesa Max")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Erro:Temp Mesa Min")
#define MSG_HEATING                         _UxGT("Aquecendo...")
#define MSG_BED_HEATING                     _UxGT("Aquecendo base...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibrar Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrar X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrar Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrar Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrar Centro")

#define MSG_DELTA_SETTINGS                  _UxGT("Configuracao Delta")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto-Calibracao")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Calibrar Altura")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Haste Diagonal")
#define MSG_DELTA_HEIGHT                    _UxGT("Altura")
#define MSG_DELTA_RADIUS                    _UxGT("Raio")
#define MSG_INFO_MENU                       _UxGT("Sobre")
#define MSG_INFO_PRINTER_MENU               _UxGT("Impressora")
#define MSG_3POINT_LEVELING                 _UxGT("Nivelamento 3 pontos")
#define MSG_LINEAR_LEVELING                 _UxGT("Nivelamento Linear")
#define MSG_BILINEAR_LEVELING               _UxGT("Nivelamento Bilinear")
#define MSG_UBL_LEVELING                    _UxGT("Nivelamento UBL")
#define MSG_MESH_LEVELING                   _UxGT("Nivelamento da Malha")
#define MSG_INFO_STATS_MENU                 _UxGT("Estatisticas")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info. da Placa")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistores")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrusoras")
#define MSG_INFO_BAUDRATE                   _UxGT("Frequencia Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocolo")
#define MSG_CASE_LIGHT                      _UxGT("Luz da Estrutura")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Intensidade Brilho")
#define MSG_INFO_PRINT_COUNT                _UxGT("Qtd Impressoes")
#define MSG_INFO_COMPLETED_PRINTS           _UxGT("Completas")
#define MSG_INFO_PRINT_TIME                 _UxGT("Tempo de Imprimindo")
#define MSG_INFO_PRINT_LONGEST              _UxGT("Impressao Mais Longa")
#define MSG_INFO_PRINT_FILAMENT             _UxGT("Depositado")
#define MSG_INFO_MIN_TEMP                   _UxGT("Temp Min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp Max")
#define MSG_INFO_PSU                        _UxGT("PSU")
#define MSG_DRIVE_STRENGTH                  _UxGT("Forca do Motor")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Escrever Eeprom DAC")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("Troca de Filamento")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("Config. de Retomada")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extrusar Mais")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Continuar Impressao")
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Temp. Minima eh ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Hotend: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Falha ao ir a origem")
#define MSG_ERR_PROBING_FAILED              _UxGT("Falha ao sondar")

#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Esperando o")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("inicio da")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("troca de Filamento")

  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Esperando")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("remocao de filamento")

  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Coloque Filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("e pressione o botao")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("para continuar...")

  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Pressione o botao")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("p/ Aquecer o Hotend")

  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Aquecendo o Hotend")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Aguarde...")

  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Esperando")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filamento")

  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Esperando extrusao")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("de filamento")

  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Esperando impressao")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("continuar")
#else LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Aguarde...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ejetando...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insira e Clique")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Aquecendo...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Carregando...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Extrusando...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Continuando...")
#endif

#endif // LANGUAGE_PT_BR_H
