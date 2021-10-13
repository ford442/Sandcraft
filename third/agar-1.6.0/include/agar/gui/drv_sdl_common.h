/*	Public domain	*/
/*
 * Code common to all drivers using the SDL library.
 */

#include <agar/config/have_sdl.h>
#ifdef HAVE_SDL

/* XXX */
#undef HAVE_SNPRINTF
#undef HAVE_VSNPRINTF
#undef HAVE_SYS_TYPES_H
#undef HAVE_STDIO_H
#undef HAVE_STDLIB_H
#undef HAVE_STDARG_H
#undef Uint8
#undef Sint8
#undef Uint16
#undef Sint16
#undef Uint32
#undef Sint32
#undef Uint64
#undef Sint64

#ifdef _USE_SDL_FRAMEWORK
# include <SDL/SDL.h>
# ifdef main
#  undef main
# endif
#else
# include <SDL.h>
#endif

#include <agar/gui/begin.h>

/* Begin generated block */
__BEGIN_DECLS
extern DECLSPEC AG_PixelFormat *_Nonnull AG_SDL_GetPixelFormat(const SDL_Surface *_Nonnull);
extern DECLSPEC void AG_SDL_BlitSurface(const AG_Surface *_Nonnull, const AG_Rect *_Nullable, SDL_Surface *_Nonnull, int,int);
extern DECLSPEC AG_Surface *_Nullable AG_SDL_ImportSurface(SDL_Surface *_Nonnull);
extern DECLSPEC int AG_SDL_SetRefreshRate(void *_Nonnull, int);
extern DECLSPEC void AG_SDL_InitDefaultCursor(void *_Nonnull);
extern DECLSPEC int AG_SDL_SetCursor(void *_Nonnull, AG_Cursor *_Nonnull);
extern DECLSPEC void AG_SDL_UnsetCursor(void *_Nonnull);
extern DECLSPEC AG_Cursor *_Nullable AG_SDL_CreateCursor(void *_Nonnull, Uint,Uint, const Uint8 *_Nonnull, const Uint8 *_Nonnull, int,int);
extern DECLSPEC void AG_SDL_FreeCursor(void *_Nonnull, AG_Cursor *_Nonnull);
extern DECLSPEC int AG_SDL_GetCursorVisibility(void *_Nonnull);
extern DECLSPEC void AG_SDL_SetCursorVisibility(void *_Nonnull, int);
extern DECLSPEC int AG_SDL_GetDisplaySize(Uint *_Nonnull, Uint *_Nonnull);
extern DECLSPEC void AG_SDL_GetPrefDisplaySettings(void *_Nonnull, Uint *_Nonnull, Uint *_Nonnull, int *_Nonnull);
extern DECLSPEC void AG_SDL_BeginEventProcessing(void *_Nullable);
extern DECLSPEC int AG_SDL_PendingEvents(void *_Nonnull);
extern DECLSPEC void AG_SDL_TranslateEvent(void *_Nonnull, const SDL_Event *_Nonnull, AG_DriverEvent *_Nonnull);
extern DECLSPEC int AG_SDL_GetNextEvent(void *_Nonnull, AG_DriverEvent *_Nonnull);
extern DECLSPEC int AG_SDL_ProcessEvent(void *_Nullable, AG_DriverEvent *_Nonnull);
extern DECLSPEC int AG_SDL_EventSink(AG_EventSink *_Nonnull, AG_Event *_Nonnull);
extern DECLSPEC int AG_SDL_EventEpilogue(AG_EventSink *_Nonnull, AG_Event *_Nonnull);
extern DECLSPEC void AG_SDL_EndEventProcessing(void *_Nonnull);
__END_DECLS
/* Close generated block */

#include <agar/gui/close.h>
#endif /* HAVE_SDL */
