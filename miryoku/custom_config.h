// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Due to the below, this actually makes little (no?) difference.
#define MIRYOKU_LAYERS_FLIP

// Remove hold-tap behaviour from zx./ buttons
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &lt U_FUN DEL,     &lt U_NUM BSPC,    &lt U_SYM RET,     &lt U_MOUSE TAB,   &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              U_NP


// Following are same as the "_FLIP" versions but with disabled same hand toggles
#define MIRYOKU_LAYER_FUN \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPC,           &kp K_APP,         U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQL,           &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp SEMI,          \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp BSLH,          &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp COLON,         \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE \
U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            U_NU,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Also swap u_out_tog for u_bt_sel_4
#define MIRYOKU_LAYER_MEDIA \
U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         &rgb_ug RGB_TOG,   U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP
