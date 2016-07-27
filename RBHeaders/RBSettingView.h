//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RBMenuView, RBSettingMenuButton;

@interface RBSettingView : UIView
{
    _Bool m_Animating;
    float m_DefaultHeight;
    float m_NeedMenuHeight;
    int _thema;
    RBMenuView *_parentView;
    UIView *_baseView;
    RBSettingMenuButton *_howToButton;
    RBSettingMenuButton *_customButton;
    RBSettingMenuButton *_themaButton;
    RBSettingMenuButton *_searchButton;
    RBSettingMenuButton *_infoButton;
    RBSettingMenuButton *_applilinkButton;
}

@property(retain, nonatomic) RBSettingMenuButton *applilinkButton; // @synthesize applilinkButton=_applilinkButton;
@property(retain, nonatomic) RBSettingMenuButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) RBSettingMenuButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) RBSettingMenuButton *themaButton; // @synthesize themaButton=_themaButton;
@property(retain, nonatomic) RBSettingMenuButton *customButton; // @synthesize customButton=_customButton;
@property(retain, nonatomic) RBSettingMenuButton *howToButton; // @synthesize howToButton=_howToButton;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak RBMenuView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (id)getCustomizeButtonView;
- (void)selectMap:(id)arg1;
- (void)SelectExitButton;
- (void)SelectApplilinkButton;
- (void)SelectInfoButton;
- (void)SelectHowToPlayButton;
- (void)selectThema:(id)arg1;
- (void)SelectCustomizeButton;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideAnimationEnd;
- (void)hideAnimation;
- (void)showAnimation;
- (void)CloseView;
- (void)OpenView;
- (void)setupView:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 ButtonFrame:(struct CGRect)arg2;

@end
