#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

#include <html5.h>

#define assert_null_ret(x) if(x == NULL){return;}

void html5_render_attributes_global(html5_attributes_global *gattr)
{	
	assert_null_ret(gattr);
	
	if(gattr->accesskey != NULL)
	{
		fprintf(stdout, " href=\"%s\"", gattr->accesskey);
	}
	
	if(gattr->cssclass != NULL)
	{
		fprintf(stdout, " class=\"%s\"", gattr->cssclass);
	}
	
	if(gattr->contenteditable != NULL)
	{
		fprintf(stdout, " contenteditable=\"%s\"", gattr->contenteditable);
	}
	
	if(gattr->contextmenu != NULL)
	{
		fprintf(stdout, " contextmenu=\"%s\"", gattr->contextmenu);
	}
	
	if(gattr->dir != NULL)
	{
		fprintf(stdout, " dir=\"%s\"", gattr->dir);
	}
	
	if(gattr->draggable != NULL)
	{
		fprintf(stdout, " draggable=\"%s\"", gattr->draggable);
	}
		
	if(gattr->dropzone != NULL)
	{
		fprintf(stdout, " dropzone=\"%s\"", gattr->dropzone);
	}
	
	if(gattr->hidden != NULL)
	{
		fprintf(stdout, " href=\"%s\"", gattr->hidden);
	}
	
	if(gattr->id != NULL)
	{
		fprintf(stdout, " id=\"%s\"", gattr->id);
	}
	
	if(gattr->lang != NULL)
	{
		fprintf(stdout, " lang=\"%s\"", gattr->lang);
	}
		
	if(gattr->spellcheck != NULL)
	{
		fprintf(stdout, " spellcheck=\"%s\"", gattr->spellcheck);
	}
		
	if(gattr->style != NULL)
	{
		fprintf(stdout, " style=\"%s\"", gattr->style);
	}
	
	if(gattr->tabindex != NULL)
	{
		fprintf(stdout, " tabindex=\"%s\"", gattr->tabindex);
	}
		
	if(gattr->title != NULL)
	{
		fprintf(stdout, " title=\"%s\"", gattr->title);
	}

}


void html5_render_event_attributes_form(html5_event_attributes_form *event_form)
{
		if(event_form->onblur != NULL)
		{
			fprintf(stdout, " onblur=\"%s\"", event_form->onblur);
		}

		if(event_form->onchange != NULL)
		{
			fprintf(stdout, " onchange=\"%s\"", event_form->onchange);
		}
	
		if(event_form->oncontextmenu != NULL)
		{
			fprintf(stdout, " oncontextmenu=\"%s\"", event_form->oncontextmenu);
		}
		
		if(event_form->onfocus != NULL)
		{
			fprintf(stdout, " onfocus=\"%s\"", event_form->onfocus);
		}

		if(event_form->onforminput != NULL)
		{
			fprintf(stdout, " onforminput=\"%s\"", event_form->onforminput);
		}
		if(event_form->onhaschange != NULL)
		{
			fprintf(stdout, " onhaschange=\"%s\"", event_form->onhaschange);
		}
		
		if(event_form->oninput != NULL)
		{
			fprintf(stdout, " oninput=\"%s\"", event_form->oninput);
		}
		if(event_form->oninvalid != NULL)
		{
			fprintf(stdout, " oninvalid=\"%s\"", event_form->oninvalid);
		}
		
		if(event_form->onreset != NULL)
		{
			fprintf(stdout, " onreset=\"%s\"", event_form->onreset);
		}
		
		if(event_form->onselect != NULL)
		{
			fprintf(stdout, " onselect=\"%s\"", event_form->onselect);
		}
	
		if(event_form->onsubmit != NULL)
		{
			fprintf(stdout, " onsubmit=\"%s\"", event_form->onsubmit);
		}
	
}

void html5_render_event_attributes_media(html5_event_attributes_media *event_media)
{
	if(event_media->onabort != NULL)
	{
		fprintf(stdout, " onabort=\"%s\"", event_media->onabort);
	}

	if(event_media->oncanplay != NULL)
	{
		fprintf(stdout, " oncanplay=\"%s\"", event_media->oncanplay);
	}
	
	if(event_media->oncanplaythrough != NULL)
	{
		fprintf(stdout, " oncanplaythrough=\"%s\"", event_media->oncanplaythrough);
	}
	
	if(event_media->ondurationchange != NULL)
	{
		fprintf(stdout, " ondurationchange=\"%s\"", event_media->ondurationchange);
	}
	
	if(event_media->onemptied != NULL)
	{
		fprintf(stdout, " onemptied=\"%s\"", event_media->onemptied);
	}
	
	if(event_media->onended != NULL)
	{
		fprintf(stdout, " onended=\"%s\"", event_media->onended);
	}
	
	if(event_media->onerror != NULL)
	{
		fprintf(stdout, " onerror=\"%s\"", event_media->onerror);
	}
	
	if(event_media->onloaddata != NULL)
	{
		fprintf(stdout, " onloaddata=\"%s\"", event_media->onloaddata);
	}
	
	if(event_media->onloadedmetadata != NULL)
	{
		fprintf(stdout, " onloadedmetadata=\"%s\"", event_media->onloadedmetadata);
	}
	
	if(event_media->onloadstart != NULL)
	{
		fprintf(stdout, " onloadstart=\"%s\"", event_media->onloadstart);
	}
	if(event_media->onpause != NULL)
	{
		fprintf(stdout, " onpause=\"%s\"", event_media->onpause);
	}
	
	if(event_media->onplay != NULL)
	{
		fprintf(stdout, " onplay=\"%s\"", event_media->onplay);
	}
	if(event_media->onplaying != NULL)
	{
		fprintf(stdout, " onplaying=\"%s\"", event_media->onplaying);
	
	}
	
	if(event_media->onprogress != NULL)
	{
		fprintf(stdout, " onprogress=\"%s\"", event_media->onprogress);
	}
	
	if(event_media->onratechange != NULL)
	{
		fprintf(stdout, " onratechange=\"%s\"", event_media->onratechange);
	}
	
	if(event_media->onreadystatechange != NULL)
	{
		fprintf(stdout, " onreadystatechange=\"%s\"", event_media->onreadystatechange);
	}
	
	if(event_media->onseeked != NULL)
	{
		fprintf(stdout, " onseeked=\"%s\"", event_media->onseeked);
	}
	
	if(event_media->onstalled != NULL)
	{
		fprintf(stdout, " onstalled=\"%s\"", event_media->onstalled);
	}
	
	if(event_media->onsuspend != NULL)
	{
		fprintf(stdout, " onsuspend=\"%s\"", event_media->onsuspend);
	}
	
	if(event_media->ontimeupdate != NULL)
	{
		fprintf(stdout, " ontimeupdate=\"%s\"", event_media->ontimeupdate);
	}
	
	if(event_media->onvolumechange != NULL)
	{
		fprintf(stdout, " onvolumechange=\"%s\"", event_media->onvolumechange);
	}
	
	if(event_media->onwaiting != NULL)
	{
		fprintf(stdout, " onwaiting=\"%s\"", event_media->onwaiting);
	}
	
	if(event_media->onseeked != NULL)
	{
		fprintf(stdout, " onseeked=\"%s\"", event_media->onseeked);
	}
	
	if(event_media->onseeked != NULL)
	{
		fprintf(stdout, " onseeked=\"%s\"", event_media->onseeked);
	}
	
	if(event_media->onseeked != NULL)
	{
		fprintf(stdout, " onseeked=\"%s\"", event_media->onseeked);
	}
}

void html5_render_event_attributes_mouse(html5_event_attributes_mouse *event_mouse)
{
	if(event_mouse->inmousewheel != NULL)
	{
		fprintf(stdout, " inmousewheel=\"%s\"", event_mouse->inmousewheel);
	}

	if(event_mouse->onclick != NULL)
	{
		fprintf(stdout, " onclick=\"%s\"", event_mouse->onclick);
	}
	
	if(event_mouse->ondbclick != NULL)
	{
		fprintf(stdout, " ondbclick=\"%s\"", event_mouse->ondbclick);
	}
	
	if(event_mouse->ondrag != NULL)
	{
		fprintf(stdout, " ondrag=\"%s\"", event_mouse->ondrag);
	}
	
	if(event_mouse->ondragend != NULL)
	{
		fprintf(stdout, " ondragend =\"%s\"", event_mouse->ondragend );
	}
	
	if(event_mouse->ondragenter != NULL)
	{
		fprintf(stdout, " ondragenter=\"%s\"", event_mouse->ondragenter);
	}
	
	if(event_mouse->ondragleave != NULL)
	{
		fprintf(stdout, " ondragleave=\"%s\"", event_mouse->ondragleave);
	}
	
	if(event_mouse->ondragover != NULL)
	{
		fprintf(stdout, " ondragover=\"%s\"", event_mouse->ondragover);
	}
	if(event_mouse->ondragstart != NULL)
	{
		fprintf(stdout, " ondragstart=\"%s\"", event_mouse->ondragstart);
	}
	if(event_mouse->ondrop != NULL)
	{
		fprintf(stdout, " ondrop=\"%s\"", event_mouse->ondrop);
	}
	if(event_mouse->onmousedown != NULL)
	{
		fprintf(stdout, " onmousedown=\"%s\"", event_mouse->onmousedown);
	}
	if(event_mouse->onmousemove != NULL)
	{
		fprintf(stdout, " onmousemove=\"%s\"", event_mouse->onmousemove);
	}
	if(event_mouse->onmouseout != NULL)
	{
		fprintf(stdout, " onmouseout=\"%s\"", event_mouse->onmouseout);
	}
	if(event_mouse->onmouseover != NULL)
	{
		fprintf(stdout, " onmouseover=\"%s\"", event_mouse->onmouseover);
	}
		if(event_mouse->onmouseup != NULL)
	{
		fprintf(stdout, " onmouseup=\"%s\"", event_mouse->onmouseup);
	}
		if(event_mouse->onscroll != NULL)
	{
		fprintf(stdout, " onscroll=\"%s\"", event_mouse->onscroll);
	}
}

void html5_render_event_attributes_window(html5_event_attributes_window *event_window)
{
	if(event_window->onafterprint != NULL)
	{
		fprintf(stdout, " onafterprint=\"%s\"", event_window->onafterprint);
	}
	
	if(event_window->onbeforeonload != NULL)
	{
		fprintf(stdout, " onbeforeonload=\"%s\"", event_window->onbeforeonload);
	}
	
	if(event_window->onbeforeprint != NULL)
	{
		fprintf(stdout, " onbeforeprint=\"%s\"", event_window->onbeforeprint);
	}
	
	if(event_window->onblur != NULL)
	{
		fprintf(stdout, " onblur=\"%s\"", event_window->onblur);
	}
	
	if(event_window->onerror != NULL)
	{
		fprintf(stdout, " onerror=\"%s\"", event_window->onerror);
	}
	
	if(event_window->onfocus != NULL)
	{
		fprintf(stdout, " onfocus=\"%s\"", event_window->onfocus);
	}
	
		if(event_window->onhaschange != NULL)
	{
		fprintf(stdout, " onhaschange=\"%s\"", event_window->onhaschange);
	}
	
	if(event_window->onload != NULL)
	{
		fprintf(stdout, " onload=\"%s\"", event_window->onload);
	}
	
	if(event_window->onmessage != NULL)
	{
		fprintf(stdout, " onmessage=\"%s\"", event_window->onmessage);
	}
	
	if(event_window->onoffline != NULL)
	{
		fprintf(stdout, " onoffline=\"%s\"", event_window->onoffline);
	}
	
	if(event_window->ononline != NULL)
	{
		fprintf(stdout, " ononline=\"%s\"", event_window->ononline);
	}
	
	if(event_window->onpagehide != NULL)
	{
		fprintf(stdout, " onpagehide=\"%s\"", event_window->onpagehide);
	}
	
	if(event_window->onpageshow != NULL)
	{
		fprintf(stdout, " onpageshow=\"%s\"", event_window->onpageshow);
	}
	
	if(event_window->onpopstate != NULL)
	{
		fprintf(stdout, " onpopstate=\"%s\"", event_window->onpopstate);
	}
	
	if(event_window->onredo != NULL)
	{
		fprintf(stdout, " onredo=\"%s\"", event_window->onredo);
	}
	
	if(event_window->onresize != NULL)
	{
		fprintf(stdout, " onresize=\"%s\"", event_window->onresize);
	}
	
	if(event_window->onstorage != NULL)
	{
		fprintf(stdout, " onstorage=\"%s\"", event_window->onstorage);
	}
	
	if(event_window->onundo != NULL)
	{
		fprintf(stdout, " onundo=\"%s\"", event_window->onundo);
	}
	
	if(event_window->onunload != NULL)
	{
		fprintf(stdout, " onunload=\"%s\"", event_window->onunload);
	}
	
}

void html5_render_event_attributes(html5_event_attributes *event_attr)
{
	assert_null_ret(event_attr);
	
	//form events
	if(event_attr->event_attr_form != NULL)
	{	
		html5_render_event_attributes_form(event_attr->event_attr_form);
	}

	//media events
	if(event_attr->event_attr_media != NULL)
	{	
		html5_render_event_attributes_media(event_attr->event_attr_media);
	}
	
	//mouse events
	if(event_attr->event_attr_mouse != NULL)
	{	
		html5_render_event_attributes_mouse(event_attr->event_attr_mouse);
	}

	//window events
	if(event_attr->event_attr_window != NULL)
	{	
		html5_render_event_attributes_window(event_attr->event_attr_window);
	}
}


void html5_event_attributes_outset(html5_event_attributes *evattr)
{
	html5_event_attribute_form_outset(evattr->event_attr_form);
	html5_event_attribute_media_outset(evattr->event_attr_media);
	html5_event_attribute_mouse_outset(evattr->event_attr_mouse);
	html5_event_attribute_window_outset(evattr->event_attr_window);
}


void html5_event_attribute_form_outset(html5_event_attributes_form *event_attr_form)
{
	event_attr_form->onblur = NULL;
	event_attr_form->onchange = NULL;
	event_attr_form->oncontextmenu = NULL;
	event_attr_form->onfocus = NULL;
	event_attr_form->onforminput = NULL;
	event_attr_form->onhaschange = NULL;
	event_attr_form->oninput = NULL;
	event_attr_form->oninvalid = NULL;
	event_attr_form->onreset = NULL;
	event_attr_form->onselect = NULL;
	event_attr_form->onsubmit = NULL;
}

void html5_event_attribute_media_outset(html5_event_attributes_media *event_attr_media)
{
	event_attr_media->onabort = NULL;
	event_attr_media->oncanplay = NULL;
	event_attr_media->oncanplaythrough = NULL;
	event_attr_media->ondurationchange = NULL;
	event_attr_media->onemptied = NULL;
	event_attr_media->onended = NULL;
	event_attr_media->onerror = NULL;
	event_attr_media->onloaddata = NULL;
	event_attr_media->onloadedmetadata = NULL;
	event_attr_media->onloadstart = NULL;
	event_attr_media->onpause = NULL;
	event_attr_media->onplay = NULL;
	event_attr_media->onplaying = NULL;
	event_attr_media->onprogress = NULL;
	event_attr_media->onratechange = NULL;
	event_attr_media->onreadystatechange = NULL;
	event_attr_media->onseeked = NULL;
	event_attr_media->onstalled = NULL;
	event_attr_media->onsuspend = NULL;
	event_attr_media->ontimeupdate = NULL;
	event_attr_media->onvolumechange = NULL;
	event_attr_media->onwaiting = NULL;
}


void html5_event_attribute_mouse_outset(html5_event_attributes_mouse *event_attr_mouse)
{
	event_attr_mouse->inmousewheel = NULL;
	event_attr_mouse->onclick = NULL;
	event_attr_mouse->ondbclick = NULL;
	event_attr_mouse->ondrag = NULL;
	event_attr_mouse->ondragend = NULL;
	event_attr_mouse->ondragenter = NULL;
	event_attr_mouse->ondragleave = NULL;
	event_attr_mouse->ondragover = NULL;
	event_attr_mouse->ondragstart = NULL;
	event_attr_mouse->ondrop = NULL;
	event_attr_mouse->onmousedown = NULL;
	event_attr_mouse->onmousemove = NULL;
	event_attr_mouse->onmouseout = NULL;
	event_attr_mouse->onmouseover = NULL;
	event_attr_mouse->onmouseup = NULL;
	event_attr_mouse->onscroll = NULL;
}

void html5_event_attribute_window_outset(html5_event_attributes_window *event_attr_window)
{
	event_attr_window->onafterprint = NULL;
	event_attr_window->onbeforeonload = NULL;
	event_attr_window->onbeforeprint = NULL;
	event_attr_window->onblur = NULL;
	event_attr_window->onerror = NULL;
	event_attr_window->onfocus = NULL;
	event_attr_window->onhaschange = NULL;
	event_attr_window->onload = NULL;
	event_attr_window->onmessage = NULL;
	event_attr_window->onoffline = NULL;
	event_attr_window->ononline = NULL;
	event_attr_window->onpagehide = NULL;
	event_attr_window->onpageshow = NULL;
	event_attr_window->onpopstate = NULL;
	event_attr_window->onredo = NULL;
	event_attr_window->onresize = NULL;
	event_attr_window->onstorage = NULL;
	event_attr_window->onundo = NULL;
	event_attr_window->onunload = NULL;
}


void html5_render_attributes_body(html5_attributes_body *attr_body)
{
	assert_null_ret(attr_body);
	
	if(attr_body->manifest != NULL)
	{
		fprintf(stdout, " manifest=\"%s\"", attr_body->manifest);
	}

	if(attr_body->xmlns != NULL)
	{
		fprintf(stdout, " xmlns=\"%s\"", attr_body->xmlns);
	}
}

void html5_attributes_body_outset(html5_attributes_body *html5_attr_body)
{
	html5_attr_body->manifest = NULL;
	html5_attr_body->xmlns = NULL;
}

void html5_body(html5_attributes_global *html5_attr_global, html5_attributes_body *html5_attr_body, html5_event_attributes *html5_event_attr)
{
	fprintf(stdout, "<body");
	
	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_body(html5_attr_body);
	html5_render_event_attributes(html5_event_attr);
	
	fprintf(stdout, ">\n");
}

void html5_attributes_global_outset(html5_attributes_global *html5_attr_global)
{
	html5_attr_global->accesskey = NULL;
	html5_attr_global->cssclass = NULL;
	html5_attr_global->contenteditable = NULL;
	html5_attr_global->contextmenu = NULL;
	html5_attr_global->dir = NULL;
	html5_attr_global->draggable = NULL;
	html5_attr_global->dropzone = NULL;
	html5_attr_global->hidden = NULL;
	html5_attr_global->id = NULL;
	html5_attr_global->lang = NULL;
	html5_attr_global->spellcheck = NULL;
	html5_attr_global->style = NULL;
	html5_attr_global->tabindex = NULL;
	html5_attr_global->title = NULL;
}

void html5_render_attributes_a(html5_attributes_a *attr)
{
	assert_null_ret(attr);
	
	if(attr->href != NULL)
	{
		fprintf(stdout, " href=\"%s\"", attr->href);
	}
	
	if(attr->hreflang != NULL)
	{
		fprintf(stdout, " hreflang=\"%s\"", attr->hreflang);
	}

	if(attr->media != NULL)
	{
		fprintf(stdout, " media=\"%s\"", attr->media);
	}

	if(attr->rel != NULL)
	{
		fprintf(stdout, " rel=\"%s\"", attr->rel);
	}
	
	if(attr->target != NULL)
	{
		fprintf(stdout, " target=\"%s\"", attr->target);
	}
	
	if(attr->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr->type);
	}
	
	if(attr->_ext != NULL)
	{
		fprintf(stdout, " %s", attr->_ext);
	}
}


void html5_render_attributes_area(html5_attributes_area *attr_area)
{
	assert_null_ret(attr_area);

	if(attr_area->alt != NULL)
	{
		fprintf(stdout, " alt=\"%s\"", attr_area->alt);
	}
	
	if(attr_area->coords != NULL)
	{
		fprintf(stdout, " coords=\"%s\"", attr_area->coords);
	}
	
	if(attr_area->href != NULL)
	{
		fprintf(stdout, " href=\"%s\"", attr_area->href);
	}
	
	if(attr_area->hreflang != NULL)
	{
		fprintf(stdout, " hreflang=\"%s\"", attr_area->hreflang);
	}
	
	if(attr_area->media != NULL)
	{
		fprintf(stdout, " media=\"%s\"", attr_area->media);
	}
	
	if(attr_area->rel != NULL)
	{
		fprintf(stdout, " rel=\"%s\"", attr_area->rel);
	}
	if(attr_area->shape != NULL)
	{
		fprintf(stdout, " shape=\"%s\"", attr_area->shape);
	}
	if(attr_area->target != NULL)
	{
		fprintf(stdout, " target=\"%s\"", attr_area->target);
	}
	if(attr_area->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_area->type);
	}

	
}

void html5_render_attributes_audio(html5_attributes_audio *attr_audio)
{
	assert_null_ret(attr_audio);
	
	if(attr_audio->autoplay != NULL)
	{
		fprintf(stdout, " autoplay=\"%s\"", attr_audio->autoplay);
	}
	
	if(attr_audio->controls != NULL)
	{
		fprintf(stdout, " controls=\"%s\"", attr_audio->controls);
	}
	
	if(attr_audio->loop != NULL)
	{
		fprintf(stdout, " loop=\"%s\"", attr_audio->loop);
	}
	
	if(attr_audio->preload != NULL)
	{
		fprintf(stdout, " preload=\"%s\"", attr_audio->preload);
	}
	
	if(attr_audio->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_audio->src);
	}
}

void html5_render_attributes_base(html5_attributes_base *attr_base)
{
	assert_null_ret(attr_base);

	if(attr_base->href != NULL)
	{
		fprintf(stdout, " href=\"%s\"",attr_base->href);
	}
	
	if(attr_base->target != NULL)
	{
		fprintf(stdout, " target=\"%s\"", attr_base->target);
	}
}

void html5_render_attributes_bdo(html5_attributes_bdo *attr_bdo)
{
	assert_null_ret(attr_bdo);
	
	if(attr_bdo->dir != NULL)
	{
		fprintf(stdout, " dir=\"%s\"", attr_bdo->dir);
	}
}

void html5_render_attributes_blockquote(html5_attributes_blockquote *attr_blockquote)
{
	assert_null_ret(attr_blockquote);
	
	if(attr_blockquote->cite != NULL)
	{
		fprintf(stdout, " cite=\"%s\"", attr_blockquote->cite);
	}
}


void html5_render_attributes_button(html5_attributes_button *attr_button)
{
	assert_null_ret(attr_button);

	if(attr_button->autofocus != NULL)
	{
		fprintf(stdout, " autofocus=\"%s\"", attr_button->autofocus);
	}
	
	if(attr_button->disabled!= NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_button->disabled);
	}
	
	if(attr_button->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_button->form);
	}
	
	if(attr_button->formaction != NULL)
	{
		fprintf(stdout, " formaction=\"%s\"", attr_button->formaction);
	}
	
	if(attr_button->formenctype != NULL)
	{
		fprintf(stdout, " formenctype=\"%s\"", attr_button->formenctype);
	}
	
	if(attr_button->formmethod != NULL)
	{
		fprintf(stdout, " formmethod=\"%s\"", attr_button->formmethod);
	}
	
	if(attr_button->formnovalidate != NULL)
	{
		fprintf(stdout, " formnovalidate=\"%s\"", attr_button->formnovalidate);
	}
	
	if(attr_button->fortarget != NULL)
	{
		fprintf(stdout, " fortarget=\"%s\"", attr_button->fortarget);
	}
	
	if(attr_button->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_button->name);
	}

	if(attr_button->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_button->type);
	}
	
	if(attr_button->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_button->value);
	}
}

void html5_render_attributes_canvas(html5_attributes_canvas *attr_canvas)
{
	assert_null_ret(attr_canvas);
	
	if(attr_canvas->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_canvas->height);
	}
	
	if(attr_canvas->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_canvas->width);
	}
}

void html5_render_attributes_col(html5_attributes_col *attr_col)
{
	assert_null_ret(attr_col);
	
	if(attr_col->span != NULL)
	{
		fprintf(stdout, " span=\"%s\"", attr_col->span);
	}
}

void html5_render_attributes_colgroup(html5_attributes_colgroup *attr_colgroup)
{
	assert_null_ret(attr_colgroup);
	
	if(attr_colgroup->span != NULL)
	{
		fprintf(stdout, " span=\"%s\"", attr_colgroup->span);	}
	
}

void html5_render_attributes_command(html5_attributes_command *attr_command)
{
	assert_null_ret(attr_command);

	if(attr_command->checked != NULL)
	{
		fprintf(stdout, " checked=\"%s\"", attr_command->checked);
	}

	if(attr_command->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_command->disabled);
	}
	
	if(attr_command->icon != NULL)
	{
		fprintf(stdout, " icon=\"%s\"", attr_command->icon);
	}
	
	if(attr_command->label != NULL)
	{
		fprintf(stdout, " label=\"%s\"", attr_command->label);
	}
	
	if(attr_command->radiogroup != NULL)
	{
		fprintf(stdout, " radiogroup=\"%s\"", attr_command->radiogroup);
	}
	
	if(attr_command->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_command->type);
	}
	
}

void html5_render_attributes_del(html5_attributes_del *attr_del)
{
	assert_null_ret(attr_del);
	
	if(attr_del->cite != NULL)
	{
		fprintf(stdout, " cite=\"%s\"", attr_del->cite);
	}
	
	if(attr_del->datetime != NULL)
	{
		fprintf(stdout, " datetime=\"%s\"", attr_del->datetime);
	}
}

void html5_render_attributes_details(html5_attributes_details *attr_details)
{
	assert_null_ret(attr_details);
	
	if(attr_details->open != NULL)
	{
		fprintf(stdout, " open=\"%s\"", attr_details->open);
	}
}

void html5_render_attributes_embed(html5_attributes_embed *attr_embed)
{
	assert_null_ret(attr_embed);
	
	if(attr_embed->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_embed->height);
	}
	
	
	if(attr_embed->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_embed->src);
	}
	
	
	if(attr_embed->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_embed->type);
	}
	
	
	if(attr_embed->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_embed->width);
	}

}

void html5_render_attributes_fieldset(html5_attributes_fieldset *attr_fieldset)
{
	assert_null_ret(attr_fieldset);

	if(attr_fieldset->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_fieldset->disabled);
	}
	
	if(attr_fieldset->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_fieldset->form);
	}
	
}

void html5_render_attributes_form(html5_attributes_form *attr_form)
{
	assert_null_ret(attr_form);

	if(attr_form->accept != NULL)
	{
		fprintf(stdout, " accept=\"%s\"", attr_form->accept);
	}
	
	if(attr_form->accept_charset != NULL)
	{
		fprintf(stdout, " accept-charset=\"%s\"", attr_form->accept_charset);
	}

	if(attr_form->autocomplete != NULL)
	{
		fprintf(stdout, " autocomplete=\"%s\"", attr_form->autocomplete);
	}
	
	if(attr_form->action != NULL)
	{
		fprintf(stdout, " action=\"%s\"", attr_form->action);
	}
	
	if(attr_form->enctype != NULL)
	{
		fprintf(stdout, " enctype=\"%s\"", attr_form->enctype);
	}
	
	if(attr_form->method != NULL)
	{
		fprintf(stdout, " method=\"%s\"", attr_form->method);
	}
	
	if(attr_form->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_form->name);
	}
	
	if(attr_form->novalidate != NULL)
	{
		fprintf(stdout, " novalidate=\"%s\"", attr_form->novalidate);
	}
	
	if(attr_form->target != NULL)
	{
		fprintf(stdout, " target=\"%s\"", attr_form->target);
	}
}

void html5_render_attributes_html(html5_attributes_html *attr_html)
{
	assert_null_ret(attr_html);

	if(attr_html->manifest != NULL)
	{
		fprintf(stdout, " manifest=\"%s\"", attr_html->manifest);
	}

	if(attr_html->xmlns != NULL)
	{
		fprintf(stdout, " xmlns=\"%s\"", attr_html->xmlns);
	}
}

void html5_render_attributes_iframe(html5_attributes_iframe *attr_iframe)
{
	assert_null_ret(attr_iframe);
	
	if(attr_iframe->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_iframe->height);
	}
	
	if(attr_iframe->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_iframe->name);
	}
	
	if(attr_iframe->sandbox != NULL)
	{
		fprintf(stdout, " sandbox=\"%s\"", attr_iframe->sandbox);
	}
	
	if(attr_iframe->seamless != NULL)
	{
		fprintf(stdout, " seamless=\"%s\"", attr_iframe->seamless);
	}
	
	if(attr_iframe->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_iframe->src);
	}
	
	if(attr_iframe->srcdoc != NULL)
	{
		fprintf(stdout, " srcdoc=\"%s\"", attr_iframe->srcdoc);
	}
	
	if(attr_iframe->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_iframe->width);
	}
}

void html5_render_attributes_img(html5_attributes_img *attr_img)
{
	assert_null_ret(attr_img);
	
	if(attr_img->alt != NULL)
	{
		fprintf(stdout, " alt=\"%s\"", attr_img->alt);
	}

	if(attr_img->height != NULL)
	{
		fprintf(stdout, " alt=\"%s\"", attr_img->height);
	}
	
	if(attr_img->ismap != NULL)
	{
		fprintf(stdout, " ismap=\"%s\"", attr_img->ismap);
	}
	
	if(attr_img->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_img->src);
	}
	
	if(attr_img->usemap != NULL)
	{
		fprintf(stdout, " usemap=\"%s\"", attr_img->usemap);
	}
	
	if(attr_img->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_img->width);
	}

}

void html5_render_attributes_input(html5_attributes_input *attr_input)
{
	assert_null_ret(attr_input);
	
	if(attr_input->accept != NULL)
	{
		fprintf(stdout, " accept=\"%s\"", attr_input->accept);
	}
	
	if(attr_input->alt != NULL)
	{
		fprintf(stdout, " alt=\"%s\"", attr_input->alt);
	}
	
	if(attr_input->autocomplete != NULL)
	{
		fprintf(stdout, " autocomplete=\"%s\"", attr_input->autocomplete);
	}
	
	if(attr_input->autofocus != NULL)
	{
		fprintf(stdout, " autofocus=\"%s\"", attr_input->autofocus);
	}
	
	if(attr_input->checked != NULL)
	{
		fprintf(stdout, " checked=\"%s\"", attr_input->checked);
	}
	
	if(attr_input->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_input->disabled);
	}
	
	if(attr_input->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_input->form);
	}
	
	if(attr_input->formaction != NULL)
	{
		fprintf(stdout, " formaction=\"%s\"", attr_input->formaction);
	}
	
	if(attr_input->formenctype != NULL)
	{
		fprintf(stdout, " formenctype=\"%s\"", attr_input->formenctype);
	}
	
	
	if(attr_input->formmethod != NULL)
	{
		fprintf(stdout, " formmethod=\"%s\"", attr_input->formmethod);
	}
	
	if(attr_input->formnovalidate != NULL)
	{
		fprintf(stdout, " formnovalidate=\"%s\"", attr_input->formnovalidate);
	}
	
	
	if(attr_input->fortarget != NULL)
	{
		fprintf(stdout, " fortarget=\"%s\"", attr_input->fortarget);
	}
	
	if(attr_input->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_input->height);
	}
	
	
	if(attr_input->list != NULL)
	{
		fprintf(stdout, " list=\"%s\"", attr_input->list);
	}
	
	
	if(attr_input->max != NULL)
	{
		fprintf(stdout, " max=\"%s\"", attr_input->max);
	}
	
	if(attr_input->maxlength != NULL)
	{
		fprintf(stdout, " maxlength=\"%s\"", attr_input->maxlength);
	}
	
	if(attr_input->min != NULL)
	{
		fprintf(stdout, " min=\"%s\"", attr_input->min);
	}
	
	if(attr_input->multiple != NULL)
	{
		fprintf(stdout, " multiple=\"%s\"", attr_input->multiple);
	}
	
	if(attr_input->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_input->name);
	}
	
	if(attr_input->pattern != NULL)
	{
		fprintf(stdout, " pattern=\"%s\"", attr_input->pattern);
	}
	
	if(attr_input->placeholder != NULL)
	{
		fprintf(stdout, " placeholder=\"%s\"", attr_input->placeholder);
	}
	
	if(attr_input->readonly != NULL)
	{
		fprintf(stdout, " readonly=\"%s\"", attr_input->readonly);
	}
	
	if(attr_input->required != NULL)
	{
		fprintf(stdout, " required=\"%s\"", attr_input->required);
	}
	
	if(attr_input->size != NULL)
	{
		fprintf(stdout, " size=\"%s\"", attr_input->size);
	}
	
	if(attr_input->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_input->src);
	}

	if(attr_input->step != NULL)
	{
		fprintf(stdout, " step=\"%s\"", attr_input->step);
	}
	
	if(attr_input->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_input->type);
	}
	
	if(attr_input->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_input->value);
	}

	if(attr_input->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_input->width);
	}
	
}

void html5_render_attributes_ins(html5_attributes_ins *attr_ins)
{
	assert_null_ret(attr_ins);
	
	if(attr_ins->cite != NULL)
	{
		fprintf(stdout, " cite=\"%s\"", attr_ins->cite);
	}

	if(attr_ins->datetime != NULL)
	{
		fprintf(stdout, " datetime=\"%s\"", attr_ins->datetime);
	}
	
}

void html5_render_attributes_keygen(html5_attributes_keygen *attr_keygen)
{
	assert_null_ret(attr_keygen);
	
	if(attr_keygen->autofocus != NULL)
	{
		fprintf(stdout, " autofocus=\"%s\"", attr_keygen->autofocus);
	}

	if(attr_keygen->challenge != NULL)
	{
		fprintf(stdout, " challenge=\"%s\"", attr_keygen->challenge);
	}
	
	if(attr_keygen->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_keygen->disabled);
	}
	
	if(attr_keygen->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_keygen->form);
	}
	
	if(attr_keygen->keytype != NULL)
	{
		fprintf(stdout, " keytype=\"%s\"", attr_keygen->keytype);
	}
	
	if(attr_keygen->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_keygen->name);
	}
}

void html5_render_attributes_label(html5_attributes_label *attr_label)
{
	assert_null_ret(attr_label);
	
	if(attr_label->for_ != NULL)
	{
		fprintf(stdout, " for=\"%s\"", attr_label->for_);
	}
	
	if(attr_label->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_label->form);
	}
}

void html5_render_attributes_li(html5_attributes_li *attr_li)
{
	assert_null_ret(attr_li);

	if(attr_li->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_li->value);
	}
}

void html5_render_attributes_link(html5_attributes_link *attr_link)
{
	assert_null_ret(attr_link);
	
	if(attr_link->href != NULL)
	{
		fprintf(stdout, " href=\"%s\"", attr_link->href);
	}
	
	if(attr_link->hreflang != NULL)
	{
		fprintf(stdout, " hreflang=\"%s\"", attr_link->hreflang);
	}
	
	if(attr_link->media != NULL)
	{
		fprintf(stdout, " media=\"%s\"", attr_link->media);
	}
	
	if(attr_link->rel != NULL)
	{
		fprintf(stdout, " rel=\"%s\"", attr_link->rel);
	}
	
	if(attr_link->sizes != NULL)
	{
		fprintf(stdout, " sizes=\"%s\"", attr_link->sizes);
	}
	
	if(attr_link->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_link->type);
	}
}

void html5_render_attributes_map(html5_attributes_map *attr_map)
{
	assert_null_ret(attr_map);

	if(attr_map->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_map->name);
	}
}

void html5_render_attributes_menu(html5_attributes_menu *attr_menu)
{
	assert_null_ret(attr_menu);
	
	if(attr_menu->label != NULL)
	{
		fprintf(stdout, " label=\"%s\"", attr_menu->label);
	}
	
	if(attr_menu->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_menu->type);
	}
}
void html5_render_attributes_meta(html5_attributes_meta *attr_meta)
{
	assert_null_ret(attr_meta);
	
	if(attr_meta->charset != NULL)
	{
		fprintf(stdout, " charset=\"%s\"", attr_meta->charset);
	}
	
	if(attr_meta->content != NULL)
	{
		fprintf(stdout, " content=\"%s\"", attr_meta->content);
	}
	
	if(attr_meta->http_equiv != NULL)
	{
		fprintf(stdout, " http-equiv=\"%s\"", attr_meta->http_equiv);
	}
	
	if(attr_meta->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_meta->name);
	}
}

void html5_render_attributes_meter(html5_attributes_meter *attr_meter)
{
	assert_null_ret(attr_meter);
	
	if(attr_meter->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_meter->form);
	}
	
	if(attr_meter->high != NULL)
	{
		fprintf(stdout, " high=\"%s\"", attr_meter->high);
	}
	
		
	if(attr_meter->low != NULL)
	{
		fprintf(stdout, " low=\"%s\"", attr_meter->low);
	}
	
		
	if(attr_meter->max != NULL)
	{
		fprintf(stdout, " max=\"%s\"", attr_meter->max);
	}
	
		
	if(attr_meter->min != NULL)
	{
		fprintf(stdout, " min=\"%s\"", attr_meter->min);
	}
	
		
	if(attr_meter->optimum != NULL)
	{
		fprintf(stdout, " optimum=\"%s\"", attr_meter->optimum);
	}
	
		
	if(attr_meter->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_meter->value);
	}
}

void html5_render_attributes_object(html5_attributes_object *attr_object)
{
	assert_null_ret(attr_object);

	if(attr_object->data != NULL)
	{
		fprintf(stdout, " data=\"%s\"", attr_object->data);
	}
	
	if(attr_object->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_object->form);
	}
	
		if(attr_object->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_object->height);
	}
	
		if(attr_object->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_object->name);
	}
	
		if(attr_object->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_object->type);
	}
	
	if(attr_object->usemap != NULL)
	{
		fprintf(stdout, " usemap=\"%s\"", attr_object->usemap);
	}

	if(attr_object->width != NULL)
	{
		fprintf(stdout, " width=\"%s\"", attr_object->width);
	}
}

void html5_render_attributes_ol(html5_attributes_ol *attr_ol)
{
	assert_null_ret(attr_ol);
	
	if(attr_ol->reversed != NULL)
	{
		fprintf(stdout, " reversed=\"%s\"", attr_ol->reversed);
	}
	
	if(attr_ol->start != NULL)
	{
		fprintf(stdout, " start=\"%s\"", attr_ol->start);
	}
	
	if(attr_ol->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_ol->type);
	}
}

void html5_render_attributes_optgroup(html5_attributes_optgroup *attr_optgroup)
{
	assert_null_ret(attr_optgroup);
	
	if(attr_optgroup->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_optgroup->disabled);
	}
	
	if(attr_optgroup->label != NULL)
	{
		fprintf(stdout, " label=\"%s\"", attr_optgroup->label);
	}

}

void html5_render_attributes_option(html5_attributes_option *attr_option)
{
	assert_null_ret(attr_option);

	if(attr_option->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_option->disabled);
	}
	
	if(attr_option->label != NULL)
	{
		fprintf(stdout, " label=\"%s\"", attr_option->label);
	}
	
	if(attr_option->selected != NULL)
	{
		fprintf(stdout, " selected=\"%s\"", attr_option->selected);
	}
	
	if(attr_option->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_option->value);
	}
}

void html5_render_attributes_output(html5_attributes_output *attr_output)
{
	assert_null_ret(attr_output);
	
	if(attr_output->for_ != NULL)
	{
		fprintf(stdout, " for=\"%s\"", attr_output->for_);
	}
	
	if(attr_output->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_output->form);
	}
	
	if(attr_output->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_output->name);
	}
	
}

void html5_render_attributes_param(html5_attributes_param *attr_param)
{
	assert_null_ret(attr_param);
	
	if(attr_param->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_param->name);
	}
	
	if(attr_param->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_param->value);
	}
}

void html5_render_attributes_progress(html5_attributes_progress *attr_progress)
{
	assert_null_ret(attr_progress);
	
	if(attr_progress->max != NULL)
	{
		fprintf(stdout, " max=\"%s\"", attr_progress->max);
	}
	
	if(attr_progress->value != NULL)
	{
		fprintf(stdout, " value=\"%s\"", attr_progress->value);
	}
}

void html5_render_attributes_q(html5_attributes_q *attr_q)
{
	assert_null_ret(attr_q);

	if(attr_q->cite != NULL)
	{
		fprintf(stdout, " cite=\"%s\"", attr_q->cite);
	}
}

void html5_render_attributes_script(html5_attributes_script *attr_script)
{
	assert_null_ret(attr_script);
	
	if(attr_script->async != NULL)
	{
		fprintf(stdout, " async=\"%s\"", attr_script->async);
	}
	
	if(attr_script->charset != NULL)
	{
		fprintf(stdout, " charset=\"%s\"", attr_script->charset);
	}
	
	if(attr_script->defer != NULL)
	{
		fprintf(stdout, " defer=\"%s\"", attr_script->defer);
	}
	
	if(attr_script->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_script->src);
	}
	
	if(attr_script->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_script->type);
	}
}

void html5_render_attributes_select(html5_attributes_select *attr_select)
{
	assert_null_ret(attr_select);
	
	if(attr_select->autofocus != NULL)
	{
		fprintf(stdout, " autofocus=\"%s\"", attr_select->autofocus);
	}
	
	if(attr_select->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_select->disabled);
	}
	
	if(attr_select->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_select->form);
	}
	
	if(attr_select->multiple != NULL)
	{
		fprintf(stdout, " multiple=\"%s\"", attr_select->multiple);
	}
	
	if(attr_select->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_select->name);
	}
	
	if(attr_select->size != NULL)
	{
		fprintf(stdout, " size=\"%s\"", attr_select->size);
	}
}

void html5_render_attributes_source(html5_attributes_source *attr_source)
{
	assert_null_ret(attr_source);

	if(attr_source->media != NULL)
	{
		fprintf(stdout, " media=\"%s\"", attr_source->media);
	}
	
	if(attr_source->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_source->src);
	}
	
	if(attr_source->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_source->type);
	}
}

void html5_render_attributes_style(html5_attributes_style *attr_style)
{
	assert_null_ret(attr_style);
	
	if(attr_style->media != NULL)
	{
		fprintf(stdout, " media=\"%s\"", attr_style->media);
	}
	
	if(attr_style->scorped != NULL)
	{
		fprintf(stdout, " scorped=\"%s\"", attr_style->scorped);
	}
	
	if(attr_style->type != NULL)
	{
		fprintf(stdout, " type=\"%s\"", attr_style->type);
	}
}

void html5_render_attributes_table(html5_attributes_table *attr_table)
{
	assert_null_ret(attr_table);

	if(attr_table->border != NULL)
	{
		fprintf(stdout, " border=\"%s\"", attr_table->border);
	}
}

void html5_render_attributes_td(html5_attributes_td *attr_td)
{
	assert_null_ret(attr_td);

	if(attr_td->colspan != NULL)
	{
		fprintf(stdout, " colspan=\"%s\"", attr_td->colspan);
	}
	
	if(attr_td->headers != NULL)
	{
		fprintf(stdout, " headers=\"%s\"", attr_td->headers);
	}
	
	if(attr_td->rowspan != NULL)
	{
		fprintf(stdout, " rowspan=\"%s\"", attr_td->rowspan);
	}
}

void html5_render_attributes_textarea(html5_attributes_textarea *attr_textarea)
{
	assert_null_ret(attr_textarea);

	if(attr_textarea->autofocus != NULL)
	{
		fprintf(stdout, " autofocus=\"%s\"", attr_textarea->autofocus);
	}
	
	if(attr_textarea->cols != NULL)
	{
		fprintf(stdout, "<a cols=\"%s\"", attr_textarea->cols);
	}
	
	if(attr_textarea->disabled != NULL)
	{
		fprintf(stdout, " disabled=\"%s\"", attr_textarea->disabled);
	}
	
	if(attr_textarea->form != NULL)
	{
		fprintf(stdout, " form=\"%s\"", attr_textarea->form);
	}
	
	if(attr_textarea->maxlength != NULL)
	{
		fprintf(stdout, " maxlength=\"%s\"", attr_textarea->maxlength);
	}
	
	if(attr_textarea->name != NULL)
	{
		fprintf(stdout, " name=\"%s\"", attr_textarea->name);
	}
	
	if(attr_textarea->placeholder != NULL)
	{
		fprintf(stdout, " placeholder=\"%s\"", attr_textarea->placeholder);
	}
	
	if(attr_textarea->readonly != NULL)
	{
		fprintf(stdout, " readonly=\"%s\"", attr_textarea->readonly);
	}
	
	if(attr_textarea->required != NULL)
	{
		fprintf(stdout, " required=\"%s\"", attr_textarea->required);
	}
	
	if(attr_textarea->rows != NULL)
	{
		fprintf(stdout, " required=\"%s\"", attr_textarea->required);
	}
	
	if(attr_textarea->wrap != NULL)
	{
		fprintf(stdout, " wrap=\"%s\"", attr_textarea->wrap);
	}
}

void html5_render_attributes_th(html5_attributes_th *attr_th)
{
	assert_null_ret(attr_th);
	
	if(attr_th->colspan != NULL)
	{
		fprintf(stdout, " colspan=\"%s\"", attr_th->colspan);
	}
	
	if(attr_th->colspan != NULL)
	{
		fprintf(stdout, " colspan=\"%s\"", attr_th->colspan);
	}
	
	if(attr_th->headers != NULL)
	{
		fprintf(stdout, " headers=\"%s\"", attr_th->headers);
	}
	
	if(attr_th->rowspan != NULL)
	{
		fprintf(stdout, " rowspan=\"%s\"", attr_th->rowspan);
	}
	
	if(attr_th->scope != NULL)
	{
		fprintf(stdout, " scope=\"%s\"", attr_th->scope);
	}
}

void html5_render_attributes_time(html5_attributes_time *attr_time)
{
	assert_null_ret(attr_time);
	
	if(attr_time->datetime != NULL)
	{
		fprintf(stdout, " datetime=\"%s\"", attr_time->datetime);
	}
	
	if(attr_time->pubdate != NULL)
	{
		fprintf(stdout, " pubdate=\"%s\"", attr_time->pubdate);
	}
	
}

void html5_render_attributes_track(html5_attributes_track *attr_track)
{
	assert_null_ret(attr_track);

	if(attr_track->default_ != NULL)
	{
		fprintf(stdout, " default=\"%s\"", attr_track->default_);
	}
	
	if(attr_track->kind != NULL)
	{
		fprintf(stdout, " kind=\"%s\"", attr_track->kind);
	}
	
	if(attr_track->label != NULL)
	{
		fprintf(stdout, " label=\"%s\"", attr_track->label);
	}
	
	if(attr_track->src != NULL)
	{
		fprintf(stdout, " src=\"%s\"", attr_track->src);
	}
	
	if(attr_track->srclang != NULL)
	{
		fprintf(stdout, " srclang=\"%s\"", attr_track->srclang);
	}
}

void html5_render_attributes_video(html5_attributes_video *attr_video)
{
	assert_null_ret(attr_video);

	if(attr_video->autoplay != NULL)
	{
		fprintf(stdout, " autoplay=\"%s\"", attr_video->autoplay);
	}
	
	if(attr_video->controls != NULL)
	{
		fprintf(stdout, " controls=\"%s\"", attr_video->controls);
	}
	
	if(attr_video->height != NULL)
	{
		fprintf(stdout, " height=\"%s\"", attr_video->height);
	}
	
	if(attr_video->loop != NULL)
	{
		fprintf(stdout, " loop=\"%s\"", attr_video->loop);
	}
	
	if(attr_video->muted != NULL)
	{
		fprintf(stdout, " muted=\"%s\"", attr_video->muted);
	}
	
	if(attr_video->poster != NULL)
	{
		fprintf(stdout, " poster=\"%s\"", attr_video->poster);
	}
	
	if(attr_video->preload != NULL)
	{
		fprintf(stdout, " preload=\"%s\"", attr_video->preload);
	}
}


void html5_attributes_a_outset(html5_attributes_a *attr_a)
{
	attr_a->_ext = NULL;
	attr_a->href = NULL;
	attr_a->hreflang = NULL;
	attr_a->media = NULL;
	attr_a->rel = NULL;
	attr_a->target = NULL;
	attr_a->type = NULL;
}



void html5_attributes_area_outset(html5_attributes_area *attr_area)
{
	attr_area->alt = NULL;
	attr_area->coords = NULL;
	attr_area->href = NULL;
	attr_area->hreflang = NULL;
	attr_area->media = NULL;
	attr_area->rel = NULL;
	attr_area->shape = NULL;
	attr_area->target = NULL;
	attr_area->type = NULL;	
}

void html5_attributes_audio_outset(html5_attributes_audio *attr_audio)
{
	attr_audio->autoplay = NULL;
	attr_audio->controls = NULL;
	attr_audio->loop = NULL;
	attr_audio->preload = NULL;
	attr_audio->src = NULL;
}

void html5_attributes_base_outset(html5_attributes_base *attr_base)
{
	attr_base->href = NULL;
	attr_base->target = NULL;
}

void html5_attributes_bdo_outset(html5_attributes_bdo *attr_bdo)
{	
	attr_bdo->dir = NULL;	
}

void html5_attributes_blockquote_outset(html5_attributes_blockquote *attr_blockquote)
{
	attr_blockquote->cite = NULL;
}

void html5_attributes_button_outset(html5_attributes_button *attr_button)
{
	attr_button->autofocus = NULL;
	attr_button->disabled = NULL;
	attr_button->form = NULL;
	attr_button->formaction = NULL;
	attr_button->formenctype = NULL;
	attr_button->formmethod = NULL;
	attr_button->formnovalidate = NULL;
	attr_button->fortarget = NULL;
	attr_button->name = NULL;
	attr_button->type = NULL;
	attr_button->value = NULL;
}

void html5_attributes_canvas_outset(html5_attributes_canvas *attr_canvas)
{
	attr_canvas->height = NULL;
	attr_canvas->width = NULL;
	
}

void html5_attributes_col_outset(html5_attributes_col *attr_col)
{
	attr_col->span = NULL;
	
}

void html5_attributes_colgroup_outset(html5_attributes_colgroup *attr_colgroup)
{
	attr_colgroup->span = NULL;
}

void html5_attributes_command_outset(html5_attributes_command *attr_command)
{
	attr_command->checked = NULL;
	attr_command->disabled = NULL;
	attr_command->icon = NULL;
	attr_command->label = NULL;
	attr_command->radiogroup = NULL;
	attr_command->type = NULL;
}

void html5_attributes_del_outset(html5_attributes_del *attr_del)
{	
	attr_del->cite = NULL;
	attr_del->datetime = NULL;	
}

void html5_attributes_details_outset(html5_attributes_details *attr_details)
{
	attr_details->open = NULL;
	
}

void html5_attributes_embed_outset(html5_attributes_embed *attr_embed)
{
	attr_embed->height = NULL;
	attr_embed->src = NULL;
	attr_embed->type = NULL;
	attr_embed->width = NULL;
}

void html5_attributes_fieldset_outset(html5_attributes_fieldset *attr_fieldset)
{
	attr_fieldset->disabled = NULL;
	attr_fieldset->form = NULL;
	attr_fieldset->name = NULL;
	
}

void html5_attributes_form_outset(html5_attributes_form *attr_form)
{	
	attr_form->accept = NULL;
	attr_form->accept_charset = NULL;
	attr_form->action = NULL;
	attr_form->autocomplete = NULL;
	attr_form->enctype = NULL;
	attr_form->method = NULL;
	attr_form->name = NULL;
	attr_form->novalidate = NULL;
	attr_form->target = NULL;	
}

void html5_attributes_html_outset(html5_attributes_html *attr_html)
{
	attr_html->manifest = NULL;
	attr_html->xmlns = NULL;
	
}

void html5_attributes_iframe_outset(html5_attributes_iframe *attr_iframe)
{
	attr_iframe->height = NULL;
	attr_iframe->name = NULL;
	attr_iframe->sandbox = NULL;
	attr_iframe->seamless = NULL;
	attr_iframe->src = NULL;
	attr_iframe->srcdoc = NULL;
	attr_iframe->width = NULL;
}

void html5_attributes_img_outset(html5_attributes_img *attr_img)
{
	attr_img->alt = NULL;
	attr_img->height = NULL;
	attr_img->ismap = NULL;
	attr_img->ismap = NULL;
	attr_img->src = NULL;
	attr_img->usemap = NULL;
	attr_img->width = NULL;
}

void html5_attributes_input_outset(html5_attributes_input *attr_input)
{
	attr_input->accept = NULL;
	attr_input->alt = NULL;
	attr_input->autocomplete = NULL;
	attr_input->autofocus = NULL;
	attr_input->checked = NULL;
	attr_input->disabled = NULL;
	attr_input->form = NULL;
	attr_input->formaction = NULL;
	attr_input->formenctype = NULL;
	attr_input->formmethod = NULL;
	attr_input->formnovalidate = NULL;
	attr_input->fortarget = NULL;
	attr_input->height = NULL;
	attr_input->list = NULL;
	attr_input->max = NULL;
	attr_input->maxlength = NULL;
	attr_input->min = NULL;
	attr_input->multiple = NULL;
	attr_input->name = NULL;
	attr_input->pattern = NULL;
	attr_input->placeholder = NULL;
	attr_input->readonly = NULL;
	attr_input->required = NULL;
	attr_input->size = NULL;
	attr_input->src = NULL;
	attr_input->step = NULL;
	attr_input->type = NULL;
	attr_input->value = NULL;
	attr_input->width = NULL;

}

void html5_attributes_ins_outset(html5_attributes_ins *attr_ins)
{
	attr_ins->cite = NULL;
	attr_ins->datetime = NULL;
	
}

void html5_attributes_keygen_outset(html5_attributes_keygen *attr_keygen)
{
	attr_keygen->autofocus = NULL;
	attr_keygen->challenge = NULL;
	attr_keygen->disabled = NULL;
	attr_keygen->form = NULL;
	attr_keygen->keytype = NULL;
	attr_keygen->name = NULL;
}

void html5_attributes_label_outset(html5_attributes_label *attr_label)
{
	attr_label->for_ = NULL;
	attr_label->form = NULL;
	
}

void html5_attributes_li_outset(html5_attributes_li *attr_li)
{
	attr_li->value = NULL;
}

void html5_attributes_link_outset(html5_attributes_link *attr_link)
{
	attr_link->href = NULL;
	attr_link->hreflang = NULL;
	attr_link->media = NULL;
	attr_link->rel = NULL;
	attr_link->sizes = NULL;
	attr_link->type = NULL;	
}

void html5_attributes_map_outset(html5_attributes_map *attr_map)
{
	attr_map->name = NULL;
}

void html5_attributes_menu_outset(html5_attributes_menu *attr_menu)
{
	attr_menu->label = NULL;
	attr_menu->type = NULL;
	
}

void html5_attributes_meta_outset(html5_attributes_meta *attr_meta)
{
	attr_meta->charset = NULL;
	attr_meta->content = NULL;
	attr_meta->http_equiv = NULL;
	attr_meta->name = NULL;
	attr_meta->charset = NULL;
	
}

void html5_attributes_meter_outset(html5_attributes_meter *attr_meter)
{
	attr_meter->form = NULL;
	attr_meter->high = NULL;
	attr_meter->low = NULL;
	attr_meter->max = NULL;
	attr_meter->min = NULL;
	attr_meter->optimum = NULL;
	attr_meter->value = NULL;	
}

void html5_attributes_object_outset(html5_attributes_object *attr_object)
{
	attr_object->data = NULL;
	attr_object->form = NULL;
	attr_object->height = NULL;
	attr_object->name = NULL;
	attr_object->type = NULL;
	attr_object->usemap = NULL;
	attr_object->width = NULL;
	
}

void html5_attributes_ol_outset(html5_attributes_ol *attr_ol)
{
	attr_ol->reversed = NULL;
	attr_ol->start = NULL;
	attr_ol->type = NULL;
	
}

void html5_attributes_optgroup_outset(html5_attributes_optgroup *attr_optgroup)
{
	attr_optgroup->disabled = NULL;
	attr_optgroup->label = NULL;
	
}

void html5_attributes_option_outset(html5_attributes_option *attr_option)
{
	attr_option->disabled = NULL;
	attr_option->label= NULL;
	attr_option->selected = NULL;	
	attr_option->value = NULL;
	
}

void html5_attributes_output_outset(html5_attributes_output *attr_output)
{
	attr_output->for_ = NULL;
	attr_output->form = NULL;
	attr_output->name = NULL;
	
}

void html5_attributes_param_outset(html5_attributes_param *attr_param)
{
	attr_param->name = NULL;
	attr_param->value = NULL;
	
}

void html5_attributes_progress_outset(html5_attributes_progress *attr_progress)
{
	attr_progress->max = NULL;
	attr_progress->value = NULL;
	
}

void html5_attributes_q_outset(html5_attributes_q *attr_q)
{
	attr_q->cite = NULL;
	
}

void html5_attributes_script_outset(html5_attributes_script *attr_script)
{	
	attr_script->async = NULL;
	attr_script->charset = NULL;
	attr_script->defer = NULL;
	attr_script->src = NULL;
	attr_script->type = NULL;

}

void html5_attributes_select_outset(html5_attributes_select *attr_select)
{
	attr_select->autofocus = NULL;
	attr_select->disabled = NULL;
	attr_select->form = NULL;
	attr_select->multiple = NULL;
	attr_select->name = NULL;
	attr_select->size = NULL;
}

void html5_attributes_source_outset(html5_attributes_source *attr_source)
{
	attr_source->media = NULL;
	attr_source->src = NULL;
	attr_source->type = NULL;
	
}

void html5_attributes_style_outset(html5_attributes_style *attr_style)
{
	attr_style->media = NULL;
	attr_style->scorped = NULL;
	attr_style->type = NULL;
	
}

void html5_attributes_table_outset(html5_attributes_table *attr_table)
{
	attr_table->border = NULL;
	
}

void html5_attributes_td_outset(html5_attributes_td *attr_td)
{
	attr_td->colspan = NULL;
	attr_td->headers = NULL;
	attr_td->rowspan = NULL;
	
}

void html5_attributes_textarea_outset(html5_attributes_textarea *attr_textarea)
{
	attr_textarea->autofocus = NULL;
	attr_textarea->cols = NULL;
	attr_textarea->disabled = NULL;
	attr_textarea->form = NULL;
	attr_textarea->maxlength = NULL;
	attr_textarea->name = NULL;
	attr_textarea->placeholder = NULL;
	attr_textarea->readonly = NULL;
	attr_textarea->required = NULL;
	attr_textarea->rows = NULL;
	attr_textarea->wrap = NULL;
}

void html5_attributes_th_outset(html5_attributes_th *attr_th)
{
	attr_th->colspan = NULL;
	attr_th->headers = NULL;
	attr_th->rowspan = NULL;
	attr_th->scope = NULL;

}

void html5_attributes_time_outset(html5_attributes_time *attr_time)
{
	attr_time->datetime = NULL;
	attr_time->pubdate = NULL;
		
}

void html5_attributes_track_outset(html5_attributes_track *attr_track)
{
	attr_track->default_ = NULL;
	attr_track->kind = NULL;
	attr_track->label = NULL;
	attr_track->src = NULL;
	attr_track->srclang = NULL;
	
}


void html5_attributes_video_outset(html5_attributes_video *attr_video)
{
	attr_video->autoplay = NULL;
	attr_video->controls = NULL;
	attr_video->height = NULL;
	attr_video->loop = NULL;
	attr_video->muted = NULL;
	attr_video->poster = NULL;
	attr_video->preload = NULL;
	attr_video->src = NULL;
	attr_video->width = NULL;
	
}


void html5_doctype(void)
{
	fprintf(stdout, "<!DOCTYPE html>\012");
}

void html5_comment(const char *comment)
{
	fprintf(stdout, "<!-- %s -->\012", comment);
}


void html5_tag_end(const char *tagname)
{
	fprintf(stdout,"</%s>\n", (char *)tagname);
}


void html5_a(html5_attributes_global *html5_attr_global, html5_attributes_a *html5_attr_a, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<a");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_a(html5_attr_a);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_abbr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<abbr");
	
	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);
	
	fprintf(stdout, "/>");
}

void html5_attributes_abbr_outset(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<abbr");
	
	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);
	
	fprintf(stdout, ">");
}


void html5_area(html5_attributes_global *html5_attr_global, html5_attributes_area *html5_attr_area, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<area");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_area(html5_attr_area);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_audio(html5_attributes_global *html5_attr_global, html5_attributes_audio *html5_attr_audio, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<audio");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_audio(html5_attr_audio);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">\n");
}

void html5_base(html5_attributes_global *html5_attr_global, html5_attributes_base *html5_attr_base, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<base");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_base(html5_attr_base);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">\n");
}

void html5_bdo(html5_attributes_global *html5_attr_global, html5_attributes_bdo *html5_attr_bdo, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<bdo");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_bdo(html5_attr_bdo);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">\n");
}

void html5_blockquote(html5_attributes_global *html5_attr_global, html5_attributes_blockquote *html5_attr_blockquote, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<blockquote");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_blockquote(html5_attr_blockquote);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

// void html5_body(html5_attributes_global *html5_attr_global, html5_attributes_body *html5_attr_body, html5_event_attributes *html5_attr_event)
// {
// 	fprintf(stdout, "<body");
// 
// 	html5_render_attributes_global(html5_attr_global);
// 	html5_render_attributes_body(html5_attr_body);
// 	html5_render_event_attributes(html5_attr_event);
// 
// 	fprintf(stdout, ">");
// }

void html5_button(html5_attributes_global *html5_attr_global, html5_attributes_button *html5_attr_button, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<button");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_button(html5_attr_button);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_canvas(html5_attributes_global *html5_attr_global, html5_attributes_canvas *html5_attr_canvas, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<canvas");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_canvas(html5_attr_canvas);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_col(html5_attributes_global *html5_attr_global, html5_attributes_col *html5_attr_col, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<col");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_col(html5_attr_col);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_colgroup(html5_attributes_global *html5_attr_global, html5_attributes_colgroup *html5_attr_colgroup, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<colgroup");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_colgroup(html5_attr_colgroup);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_command(html5_attributes_global *html5_attr_global, html5_attributes_command *html5_attr_command, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<command");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_command(html5_attr_command);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_del(html5_attributes_global *html5_attr_global, html5_attributes_del *html5_attr_del, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<del");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_del(html5_attr_del);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_details(html5_attributes_global *html5_attr_global, html5_attributes_details *html5_attr_details, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<details");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_details(html5_attr_details);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_embed(html5_attributes_global *html5_attr_global, html5_attributes_embed *html5_attr_embed, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<embed");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_embed(html5_attr_embed);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_fieldset(html5_attributes_global *html5_attr_global, html5_attributes_fieldset *html5_attr_fieldset, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<fieldset");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_fieldset(html5_attr_fieldset);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_form(html5_attributes_global *html5_attr_global, html5_attributes_form *html5_attr_form, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<form");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_form(html5_attr_form);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_html(html5_attributes_global *html5_attr_global, html5_attributes_html *html5_attr_html, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<html");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_html(html5_attr_html);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">\n");
}

void html5_iframe(html5_attributes_global *html5_attr_global, html5_attributes_iframe *html5_attr_iframe, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<iframe");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_iframe(html5_attr_iframe);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_img(html5_attributes_global *html5_attr_global, html5_attributes_img *html5_attr_img, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<img");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_img(html5_attr_img);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, " />");
}

void html5_input(html5_attributes_global *html5_attr_global, html5_attributes_input *html5_attr_input, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<input");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_input(html5_attr_input);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, " />");
}

void html5_ins(html5_attributes_global *html5_attr_global, html5_attributes_ins *html5_attr_ins, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<ins");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_ins(html5_attr_ins);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_keygen(html5_attributes_global *html5_attr_global, html5_attributes_keygen *html5_attr_keygen, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<keygen");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_keygen(html5_attr_keygen);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_label(html5_attributes_global *html5_attr_global, html5_attributes_label *html5_attr_label, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<label");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_label(html5_attr_label);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_li(html5_attributes_global *html5_attr_global, html5_attributes_li *html5_attr_li, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<li");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_li(html5_attr_li);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_link(html5_attributes_global *html5_attr_global, html5_attributes_link *html5_attr_link, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<link");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_link(html5_attr_link);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, " />\n");
}

void html5_map(html5_attributes_global *html5_attr_global, html5_attributes_map *html5_attr_map, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<map");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_map(html5_attr_map);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_menu(html5_attributes_global *html5_attr_global, html5_attributes_menu *html5_attr_menu, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<menu");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_menu(html5_attr_menu);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_meta(html5_attributes_global *html5_attr_global, html5_attributes_meta *html5_attr_meta, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<meta");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_meta(html5_attr_meta);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_meter(html5_attributes_global *html5_attr_global, html5_attributes_meter *html5_attr_meter, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<meter");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_meter(html5_attr_meter);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_object(html5_attributes_global *html5_attr_global, html5_attributes_object *html5_attr_object, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<object");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_object(html5_attr_object);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_ol(html5_attributes_global *html5_attr_global, html5_attributes_ol *html5_attr_ol, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<ol");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_ol(html5_attr_ol);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_optgroup(html5_attributes_global *html5_attr_global, html5_attributes_optgroup *html5_attr_optgroup, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<optgroup");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_optgroup(html5_attr_optgroup);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_option(html5_attributes_global *html5_attr_global, html5_attributes_option *html5_attr_option, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<option");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_option(html5_attr_option);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_output(html5_attributes_global *html5_attr_global, html5_attributes_output *html5_attr_output, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<output");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_output(html5_attr_output);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_param(html5_attributes_global *html5_attr_global, html5_attributes_param *html5_attr_param, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<param");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_param(html5_attr_param);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_progress(html5_attributes_global *html5_attr_global, html5_attributes_progress *html5_attr_progress, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<progress");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_progress(html5_attr_progress);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_q(html5_attributes_global *html5_attr_global, html5_attributes_q *html5_attr_q, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<q");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_q(html5_attr_q);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_script(html5_attributes_global *html5_attr_global, html5_attributes_script *html5_attr_script, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<script");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_script(html5_attr_script);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_select(html5_attributes_global *html5_attr_global, html5_attributes_select *html5_attr_select, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<select");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_select(html5_attr_select);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_source(html5_attributes_global *html5_attr_global, html5_attributes_source *html5_attr_source, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<source");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_source(html5_attr_source);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_style(html5_attributes_global *html5_attr_global, html5_attributes_style *html5_attr_style, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<style");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_style(html5_attr_style);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_table(html5_attributes_global *html5_attr_global, html5_attributes_table *html5_attr_table, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<table");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_table(html5_attr_table);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_td(html5_attributes_global *html5_attr_global, html5_attributes_td *html5_attr_td, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<td");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_td(html5_attr_td);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_textarea(html5_attributes_global *html5_attr_global, html5_attributes_textarea *html5_attr_textarea, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<textarea");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_textarea(html5_attr_textarea);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_th(html5_attributes_global *html5_attr_global, html5_attributes_th *html5_attr_th, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<th");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_th(html5_attr_th);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_time(html5_attributes_global *html5_attr_global, html5_attributes_time *html5_attr_time, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<time");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_time(html5_attr_time);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_track(html5_attributes_global *html5_attr_global, html5_attributes_track *html5_attr_track, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<track");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_track(html5_attr_track);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_video(html5_attributes_global *html5_attr_global, html5_attributes_video *html5_attr_video, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<video");

	html5_render_attributes_global(html5_attr_global);
	html5_render_attributes_video(html5_attr_video);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}


void html5_acronym(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<acronym");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_address(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<address");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_applet(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<applet");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_article(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<article");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_aside(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<aside");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_b(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<b");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_basefont(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<basefont");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_bdi(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<bdi");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_big(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<big");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_br(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<br");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_caption(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<caption");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_center(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<center");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_cite(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<cite");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_code(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<code");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_datalist(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<datalist");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_dd(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<dd");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_dfn(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<dfn");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_dir(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<dir");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_div(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<div");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_dl(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<dl");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_dt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<dt");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_em(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<em");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_figcaption(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<figcaption");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_figure(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<figure");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_font(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<font");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_footer(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<footer");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_frame(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<frame");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_frameset(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<frameset");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h1(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h1");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h2(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h2");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h3(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h3");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h4(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h4");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h5(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h5");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_h6(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<h6");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_head(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<head");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">\n");
}

void html5_header(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<header");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_hgroup(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<hgroup");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_hr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<hr");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_i(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<i");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_kbd(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<kbd");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_legend(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<legend");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_mark(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<mark");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_nav(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<nav");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_noframes(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<noframes");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_noscript(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<noscript");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_p(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<p");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_pre(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<pre");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_rp(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<rp");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_rt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<rt");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_ruby(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<ruby");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_s(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<s");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_samp(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<samp");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_section(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<section");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_small(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<small");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_span(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<span");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_strike(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<strike");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_strong(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<strong");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_sub(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<sub");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_summary(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<summary");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_sup(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<sup");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_tbody(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<tbody");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_tfoot(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<tfoot");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_thead(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<thead");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_title(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<title");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_tr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<tr");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_tt(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<tt");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_u(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<u");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_ul(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<ul");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_var(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<var");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}

void html5_wbr(html5_attributes_global *html5_attr_global, html5_event_attributes *html5_attr_event)
{
	fprintf(stdout, "<wbr");

	html5_render_attributes_global(html5_attr_global);
	html5_render_event_attributes(html5_attr_event);

	fprintf(stdout, ">");
}
