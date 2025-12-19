#include <stdio.h>

int main() {
    int şifrə, giriş_şifrə;
    int balans = 1000; // başlanğıc balans
    int seçim;
    int məbləğ;

    // istifadəçidən şifrə soruşuruq
    şifrə = 1234; // bankomat şifrəsi
    printf("Şifrənizi daxil edin: ");
    scanf("%d", &giriş_şifrə);

    if (giriş_şifrə != şifrə) {
        printf("Şifrə səhvdir. Proqram bağlanır.\n");
        return 0; // proqramı dayandırır
    }

    do {
        // menyu göstərilir
        printf("\n--- Bankomat Menyu ---\n");
        printf("1. Balansı yoxla\n");
        printf("2. Pul çıxart\n");
        printf("3. Hesaba pul yatır\n");
        printf("4. Çıxış\n");
        printf("Seçiminizi daxil edin: ");
        scanf("%d", &seçim);

        switch(seçim) {
            case 1:
                printf("Sizin balansınız: %d AZN\n", balans);
                break;
            case 2:
                printf("Çıxarmaq istədiyiniz məbləği daxil edin: ");
                scanf("%d", &məbləğ);
                if (məbləğ > balans) {
                    printf("Balansınız yetərli deyil!\n");
                } else {
                    balans -= məbləğ;
                    printf("%d AZN çıxarıldı. Yeni balans: %d AZN\n", məbləğ, balans);
                }
                break;
            case 3:
                printf("Hesaba yatırmaq istədiyiniz məbləği daxil edin: ");
                scanf("%d", &məbləğ);
                balans += məbləğ;
                printf("%d AZN yatırıldı. Yeni balans: %d AZN\n", məbləğ, balans);
                break;
            case 4:
                printf("Çıxış edilir. Sağ olun!\n");
                break;
            default:
                printf("Səhv seçim! Yenidən cəhd edin.\n");
        }

    } while(seçim != 4); // istifadəçi çıxana qədər dövr davam edir

    return 0;
}
