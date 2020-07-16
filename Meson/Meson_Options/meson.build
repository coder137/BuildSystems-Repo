project('meson_option_test', 'cpp')
executable('meson_option_test', 'main.cpp')

string_op = get_option('string_op')
boolean_op = get_option('boolean_op')
integer_op = get_option('integer_op')

combo_op = get_option('combo_op')
array_op = get_option('array_op')

feature_op = get_option('feature_op')

message('string_op: ', string_op)
message('boolean_op: ', boolean_op)
message('integer_op: ', integer_op)
message('combo_op: ', combo_op)
message('array_op: ', array_op)
message('feature_op -> is_enabled: ', feature_op.enabled())
message('feature_op -> is_disabled: ', feature_op.disabled())
message('feature_op -> is_auto: ', feature_op.auto())
