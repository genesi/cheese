
/* Generated data (by glib-mkenums) */

#include "cheese-enum-types.h"

/* enumerations from "../libcheese/cheese-widget.h" */
#include "../libcheese/cheese-widget.h"

GType
cheese_widget_state_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CHEESE_WIDGET_STATE_NONE, "CHEESE_WIDGET_STATE_NONE", "none" },
        { CHEESE_WIDGET_STATE_READY, "CHEESE_WIDGET_STATE_READY", "ready" },
        { CHEESE_WIDGET_STATE_ERROR, "CHEESE_WIDGET_STATE_ERROR", "error" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("CheeseWidgetState"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* Generated data ends here */

