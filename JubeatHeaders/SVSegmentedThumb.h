//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SVSegmentedControl, UIColor, UIFont, UIImage, UILabel;

@interface SVSegmentedThumb : UIView
{
    _Bool shouldCastShadow;
    _Bool selected;
    _Bool castsShadow;
    SVSegmentedControl *segmentedControl;
    UIImage *backgroundImage;
    UIImage *highlightedBackgroundImage;
    UIFont *font;
    UIColor *tintColor;
    UIColor *textColor;
    UIColor *textShadowColor;
    UILabel *label;
    UILabel *secondLabel;
    UIColor *shadowColor;
    struct CGSize textShadowOffset;
    struct CGSize shadowOffset;
}

@property(nonatomic) _Bool castsShadow; // @synthesize castsShadow;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset;
@property(nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(nonatomic) _Bool shouldCastShadow; // @synthesize shouldCastShadow;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset;
@property(nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor;
@property(nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(retain, nonatomic) UIImage *highlightedBackgroundImage; // @synthesize highlightedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
@property(nonatomic) SVSegmentedControl *segmentedControl; // @synthesize segmentedControl;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activate;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) UIFont *font; // @synthesize font;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *secondLabel; // @synthesize secondLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label;
- (id)initWithFrame:(struct CGRect)arg1;

@end
