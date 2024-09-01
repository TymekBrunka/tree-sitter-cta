module.exports = grammar({
  name: 'cta',

  rules: {

    source_file: $ => repeat($._heading),

    _heading: $ => choice(
      $.heading_l1,
      $.heading_l2,
      $.heading_l3,
      $.heading_l4,
      $.heading_l5,
      $.heading_l6,
    ),

    heading_l1: $ => seq('= ', $.word, '\n'),
    heading_l2: $ => seq('== ', $.word, '\n'),
    heading_l3: $ => seq('=== ', $.word, '\n'),
    heading_l4: $ => seq('==== ', $.word, '\n'),
    heading_l5: $ => seq('===== ', $.word, '\n'),
    heading_l6: $ => seq('====== ', $.word, '\n'),

    word: $ => /\w+/,

  }
});
