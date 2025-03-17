#import <UIKit/UIKit.h>

typedef void (^UIBarButtonItemSetTitleListener)(NSString *);
typedef void (^UIBarButtonItemSetEnabledListener)(BOOL);

@interface UIBarButtonItem (Proxy)

@property (nonatomic, readonly) bool backButtonAppearance;

- (instancetype)initWithBackButtonAppearanceWithTitle:(NSString *)title target:(id)target action:(SEL)action;

- (void)performActionOnTarget;

- (NSInteger)addSetTitleListener:(UIBarButtonItemSetTitleListener)listener;
- (void)removeSetTitleListener:(NSInteger)key;
- (NSInteger)addSetEnabledListener:(UIBarButtonItemSetEnabledListener)listener;
- (void)removeSetEnabledListener:(NSInteger)key;

- (void)setCustomAction:(void (^)())customAction;

@end
